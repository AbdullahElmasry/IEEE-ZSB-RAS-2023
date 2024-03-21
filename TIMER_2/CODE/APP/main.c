/****************************************************/
/**************** Name : Abdullah Elmasry ***********/
/**************** Date : 29/8/2020        ***********/
/**************** SWC  : TIMER            ***********/
/**************** Version : 1.0           ***********/
/****************************************************/

#include"../LIB/STD_TYPES.h"
#include"../LIB/BIT_MATH.h"
#include"../MCAL/DIO/DIO_interface.h"
#include "../MCAL/TIMERS/TIMERS_interface.h"
#include "../MCAL/GI/GI_interface.h"
#define F_CPU 8000000UL
#include <util/delay.h>



void App_voidTogLed(void)
{
	static u8 flag = 0;
	if(flag == 0)
	{
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN0,DIO_u8_HIGH);
		flag = 1;
	}
	else
	{
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN0,DIO_u8_LOW);
		flag = 0;
	}
}





u8 main(void)
{
	u8 Local_u8CompareMatchValue = 0;
	// initialization of DIO
	DIO_voidInit();
//	// initialization of GI
//	GI_voidGlobalEnable();
//	// Set Call Back
//	TIMERS_u8Timer0CTCSetCallBack(&App_voidTogLed);
	// initialization of TIMER
	TIMERS_voidTimer1Init();

	while(505)
	{
//		TIMERS_voidTimer0SetCompareMatchValue(Local_u8CompareMatchValue);
//		Local_u8CompareMatchValue++;
//		_delay_ms(50);
	}


	return 0;
}
