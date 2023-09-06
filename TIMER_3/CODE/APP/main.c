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
#include "../MCAL/ADC/ADC_interface.h"
#include "../MCAL/TIMERS/WDT_interface.h"
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
	u16 Local_u16DigitalValue;
	u16 Local_u16ServoValue;
	// initialization of DIO
	DIO_voidInit();
	// initialization of ADC
	ADC_voidInit();
	// initialization of TIMER
	TIMERS_voidTimer1Init();

	while(505)
	{
		WDT_voidEnable();
		DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_HIGH);
		_delay_ms(1000);
		DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_LOW);
		while(1);
		WDT_voidDisable();
//		/* Reading Pot value */
//		ADC_u8GetDigitalValueSynchNonBlocking(ADC_u8_CHANNEL_0,&Local_u16DigitalValue);
//		Local_u16ServoValue = ((1000 * Local_u16DigitalValue)/1023) + 999;
//		/* Update Angle of Servo Motor */
//		TIMERS_voidTimer1SetCompareMatchValueA(Local_u16ServoValue);
	}


	return 0;
}
