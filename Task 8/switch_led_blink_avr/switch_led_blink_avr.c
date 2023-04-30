/*
 * switch_led_blink_avr.c
 *
 *  Created on: Apr 30, 2023
 *      Author: asd
 */


#include "../COTS/LIB/BIT_MATH.h"
#include "../COTS/LIB/STD_TYPES.h"
//#include <util/delay.h>


#include "../COTS/MCAL/1-DIO/DIO_Interface.h"
#include "../COTS/MCAL/1-DIO/DIO_Config.h"

int main(void)
{


	int pin_read;
		DIO_u8SetPinDirection(0, 0, 1);
		DIO_u8SetPinDirection(2, 1, 0);


		while(505){

			DIO_u8GetPinValue(2, 1, &pin_read);
			if(pin_read == 1){
				DIO_u8SetPinValue(0, 0, 1);
			}
			else{
				DIO_u8SetPinValue(0, 0, 0);
			}

		}


	return 0;
}
