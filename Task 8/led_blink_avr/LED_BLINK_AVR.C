/*
 * LED_BLINK_AVR.C
 *
 *  Created on: Apr 30, 2023
 *      Author: asd
 */


#include "../COTS/LIB/BIT_MATH.h"
#include "../COTS/LIB/STD_TYPES.h"
#include <util/delay.h>


#include "../COTS/MCAL/1-DIO/DIO_Interface.h"
#include "../COTS/MCAL/1-DIO/DIO_Config.h"

//pin direction with value 1 refers to output pin
//pin direction with value 0 refers to input pin
int main(void)
{

	DIO_u8SetPinDirection     (2 , 5 , 1 );

	while(505)
	{
		DIO_u8SetPinValue     ( 2 , 5 , 1 );
		_delay_ms(100);
		DIO_u8SetPinValue     ( 2 , 5 , 0 );
		_delay_ms(100);
	}
return 0;
}

