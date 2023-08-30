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


/* Global Pointer to Function of Timer0 OVF */
static void(*TIMERS_pfTimer0OVF) (void) = NULL;

/* Global Pointer to Function of Timer0 CTC */
static void(*TIMERS_pfTimer0CTC) (void) = NULL;


void TIMERS_voidTimer0Init(void)
{
	/* Select Mode => Normal Mode */
//	CLR_BIT(TIMERS_u8_TCCR0_REG,6);
//	CLR_BIT(TIMERS_u8_TCCR0_REG,3);

	/* Select Mode => CTC Mode */
	CLR_BIT(TIMERS_u8_TCCR0_REG,6);
	SET_BIT(TIMERS_u8_TCCR0_REG,3);

	/* Enable OVF Interrupt */
//	SET_BIT(TIMERS_u8_TIMSK_REG,0);

	/* Enable CTC Interrupt */
	SET_BIT(TIMERS_u8_TIMSK_REG,1);

	/* Set Compare Match Unit Register */
	TIMERS_u8_OCR0_REG = 99;

	/* Set Preload Value */
//	TIMERS_u8_TCNT0_REG = 192  ;

	/* Set Prescaler Value CLK/8 */
	CLR_BIT(TIMERS_u8_TCCR0_REG,2);
	CLR_BIT(TIMERS_u8_TCCR0_REG,1);
	CLR_BIT(TIMERS_u8_TCCR0_REG,0);
}


u8 TIMERS_u8Timer0SetCallBack(void(*Copy_pf)(void))
{
	u8 Local_u8ErrorState = STD_TYPES_OK;
	if(Copy_pf != NULL)
	{
		TIMERS_pfTimer0OVF = Copy_pf;
	}
	else
	{
		Local_u8ErrorState = STD_TYPES_NOK;
	}
	return Local_u8ErrorState;
}


u8 TIMERS_u8Timer0CTCSetCallBack(void(*Copy_pf)(void))
{
	u8 Local_u8ErrorState = STD_TYPES_OK;
	if(Copy_pf != NULL)
	{
		TIMERS_pfTimer0CTC = Copy_pf;
	}
	else
	{
		Local_u8ErrorState = STD_TYPES_NOK;
	}
	return Local_u8ErrorState;
}


/* Prototype for ISR of TIMER0 OVF */
void __vector_11(void)   __attribute__((signal));
void __vector_11(void)
{
	static u16 Local_u16CounterOVF = 0;
	Local_u16CounterOVF++;
	if(Local_u16CounterOVF == 3907)
	{
		/* Update Preload Value */
		TIMERS_u8_TCNT0_REG = 192;
		/* Clear the OVF Counter */
		Local_u16CounterOVF = 0;
		/* Call App Function */
		if(TIMERS_pfTimer0OVF != NULL)
		{
			TIMERS_pfTimer0OVF();
		}
	}
}


/* Prototype for ISR of TIMER0 CTC */
void __vector_10(void)   __attribute__((signal));
void __vector_10(void)
{
	static u16 Local_u16CounterCTC = 0;
	Local_u16CounterCTC++;
	if(Local_u16CounterCTC == 10000)
	{
		/* Clear Counter */
		Local_u16CounterCTC = 0;
		/* Call Back Function */
		if(TIMERS_pfTimer0CTC != NULL)
		{
			TIMERS_pfTimer0CTC();
		}
	}
}
