/****************************************************/
/**************** Name : Abdullah Elmasry ***********/
/**************** Date : 29/8/2020   ****************/
/**************** SWC  : TIMERS     *****************/
/**************** Version : 1.0     *****************/
/****************************************************/

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "TIMERS_interface.h"
#include "TIMERS_private.h"
#include "TIMERS_config.h"


	/* Global Pointers */
static void(*TIMERS_pfTimer0OVF)(void)=NULL;
static void(*TIMERS_pfTimer0CTC)(void)=NULL;

void TIMERS_VoidTimer1Init(void)
{
	/* Select Timer1 Mode => 14 ICR Top Value*/
	SET_BIT(TIMERS_u8_TCCR1A_REG,1);
	CLR_BIT(TIMERS_u8_TCCR1A_REG,0);
	SET_BIT(TIMERS_u8_TCCR1B_REG,4);
	SET_BIT(TIMERS_u8_TCCR1B_REG,3);

	/* Select HW Action ON OC1A Pin => Non Inverting */
	SET_BIT(TIMERS_u8_TCCR1A_REG,7);
	CLR_BIT(TIMERS_u8_TCCR1A_REG,6);

	/* Set Top Value In ICR1 */
	TIMERS_u8_ICR1_REG=2499;

	/* Set Angle of Servo Motor */
	/* Set Prescaler Value */
	CLR_BIT(TIMERS_u8_TCCR1B_REG,2);
    	SET_BIT(TIMERS_u8_TCCR1B_REG,1);
	CLR_BIT(TIMERS_u8_TCCR1B_REG,0);

}

u8 TIMER_u8Timer1channelACompareMatchValue(u16 copy_u16OCRValue)
{
	TIMERS_u16_OCR1A_REG=copy_u16OCRValue;
}

void TIMERS_voidservo(u8 copyangle)
{
	TIMERS_u16_OCR1A_REG=((copyangle*125)/180)+125;
}


void TIMERS_VoidTimer0Init(void)
{
#if     TIMER_MODE==TIMER_OVF_MODE
    /*select mode=>normal mode*/
    CLR_BIT(TIMERS_u8_TCCR0_REG,6);
    CLR_BIT(TIMERS_u8_TCCR0_REG,3);
    /*ENABLE OVAR FLOW INTERRUPT*/
    SET_BIT(TIMERS_u8_TIMSK_REG,0);

    /*SET PRELOAD VALUE*/
    TIMERS_u8_TCNT0_REG=TIMER_u8_PreloadValue;

#elif  TIMER_MODE==TIMER_CTC_MODE
    /* Select Mode => CTC Mode */
    CLR_BIT(TIMERS_u8_TCCR0_REG,6);
    SET_BIT(TIMERS_u8_TCCR0_REG,3);


    /* Enable CTC Interrupt */
    SET_BIT(TIMERS_u8_TIMSK_REG,1);

    /*Set Compare Match Unit Register*/
    TIMERS_u8_OCR0_REG=99;
    TIMERS_u8_TCCR0_REG=6;

#elif  TIMER_MODE==TIMER_PWM_MODE
    /* select mode => PWM mode */
        SET_BIT(TIMERS_u8_TCCR0_REG,6);
        SET_BIT(TIMERS_u8_TCCR0_REG,3);

        /* Select HW Action on oc0pin ==> Non Inverting */
        SET_BIT(TIMERS_u8_TCCR0_REG,5);
        CLR_BIT(TIMERS_u8_TCCR0_REG,4);
#elif   TIMER_MODE == TIMER_PHASE_CORRECT_PWM_MODE
        /*select mode=> PHASE CORRECT PWM mode*/
                CLR_BIT(TIMERS_u8_TCCR0_REG,6);
                SET_BIT(TIMERS_u8_TCCR0_REG,3);
                /* Select HW Action on oc0pin ==> Non Inverting */
                SET_BIT(TIMERS_u8_TCCR0_REG,5);
                CLR_BIT(TIMERS_u8_TCCR0_REG,4);

#endif
    /* Set Prescaler Value */
    CLR_BIT(TIMERS_u8_TCCR0_REG,2);
    SET_BIT(TIMERS_u8_TCCR0_REG,1);
    CLR_BIT(TIMERS_u8_TCCR0_REG,0);
}
u8 TIMER_u8Timer0SetcallBack(void(*Copy_pf)(void))
{
    u8 local_u8EroorState=STD_TYBES_OK;
    if ((Copy_pf!=NULL))
    {
        TIMERS_pfTimer0OVF=Copy_pf;
    }
    else{local_u8EroorState=STD_TYBES_NOK;}
    return local_u8EroorState;
}
void TIMERS_voidTimer0StCompareMatchvalue(u8 copy_u8OCR0Value)
{
	TIMERS_u8_OCR0_REG=copy_u8OCR0Value;
}

/* ISR */
///////////////////////////////////////////////////
void __vector_11(void)    __attribute__((signal));
void __vector_11(void)
{
if ((TIMERS_u8_TCCR0_REG==6)||(TIMERS_u8_TCCR0_REG==7))
{
	 if(TIMERS_pfTimer0OVF!=NULL)
	        {
	            TIMERS_pfTimer0OVF();
	        }}
else{
    static u16 local_u16CounterOVF=0;

    local_u16CounterOVF++;
    if(local_u16CounterOVF == 488)
    {
        /* Update Preloade Value */
        TIMERS_u8_TCNT0_REG=TIMER_u8_PreloadValue;
        /* clear_u16countovf */
        local_u16CounterOVF=0;
        /* Call Applection Function */
        if( TIMERS_pfTimer0OVF != NULL )
        {
            TIMERS_pfTimer0OVF();
        }

    }
}
}
void __vector_10(void)    __attribute__((signal));
void __vector_10(void)
{
if ((TIMERS_u8_TCCR0_REG ==6 ) || (TIMERS_u8_TCCR0_REG ==7)){
	 if(TIMERS_pfTimer0CTC != NULL)
	        {
		     TIMERS_pfTimer0CTC();
	        }
}
else{
    static u16 local_u16CounterCTC = 0;

    local_u16CounterCTC++;
    if(local_u16CounterCTC == 10000)
    {
    	local_u16CounterCTC=0;
    	/* Call Back Funccion */
    	  if(TIMERS_pfTimer0CTC != NULL)
    	        {
    	            TIMERS_pfTimer0CTC();
    	        }
    }
}
}
