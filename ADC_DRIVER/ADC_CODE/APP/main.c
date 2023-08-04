/****************************************************/
/**************** Name : Abdullah Elmasry ***********/
/**************** Date : 3/8/2020   *****************/
/**************** SWC  : ADC        *****************/
/**************** Version : 1.0     *****************/
/****************************************************/

#include "../HAL/LCD/LCD_Interface.h"
#include <util/delay.h>
#include"../LIB/STD_TYPES.h"
#include"../MCAL/DIO/DIO_interface.h"
#define F_CPU 8000000UL


u8 main(void)
{

	// initialization of DIO
	DIO_voidInit();
	// initialization of LCD
	LCD_voidInit();
	// initialization of ADC
	ADC_voidInit();

    u16 u16DigitalValue;
    u16 u16AnalogValue;

	while(505){
		//read the digital value
		ADC_u8GetDigitalValueSynchNonBlocking(0, &u16DigitalValue);

		//convert the digital value to analog value
		u16AnalogValue = (u16DigitalValue * 5000UL) / 1024UL;
//		LCD_voidSendCmnd(0x01);
		LCD_u8GoToXY(LCD_u8_LINE1,0);
		LCD_SendNum(u16AnalogValue);

	}


	return 0;
}
