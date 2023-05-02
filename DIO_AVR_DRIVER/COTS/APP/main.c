/*
 * switch_led_blink_avr.c
 *
 *  Created on: 2 / 5 , 2023
 *      Author: ABDULLAH ELMASRY 505
 */


#include "../LIB/BIT_MATH.h"
#include "../LIB/STD_TYPES.h"


 #include "../MCAL/1-DIO/DIO_interface.h"
 #include "../MCAL/1-DIO/DIO_config.h"

/* Main Function For LED_BLINK_AVR */
//int main(void)
//{
//
//	DIO_u8SetPinDirection(1, 1, 0);
//	DIO_u8SetPinValue(1, 1, 1);
//		return 0;
//}


//---------------------------------------------------------

/* Main Function For SWITCH_LED_AVR */
int main(void)
{

	DIO_u8SetPinDirection(2, 0, 0);
	DIO_u8SetPinValue(1, 1, 1);
	u8 pin_status ;

	while(505)
	{
		DIO_u8GetPinValue( 2 , 0 , &pin_status );
		if(pin_status == 1)
		{
			DIO_u8SetPinValue( 0 , 0 , 1 );
		}

		else{
			DIO_u8SetPinValue( 0 , 0 , 0 );
		}
	}



		return 0;
}
