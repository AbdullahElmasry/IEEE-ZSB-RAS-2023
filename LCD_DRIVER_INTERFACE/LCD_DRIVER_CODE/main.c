#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000UL
#include <util/delay.h>

#include "DIO_interface.h"

#include "LCD_interface.h"

int main()
{
	//Initialization of LCD
	DIO_voidInit();
	LCD_voidInit();


	LCD_voidSendCmnd(0b01000000);
	// Send Special Character 1 => Square
	LCD_voidSendChar(0b00011111);
	LCD_voidSendChar(0b00010001);
	LCD_voidSendChar(0b00010001);
	LCD_voidSendChar(0b00010001);
	LCD_voidSendChar(0b00010001);
	LCD_voidSendChar(0b00010001);
	LCD_voidSendChar(0b00011111);


	// Send Special Character 2 => Triangle
	LCD_voidSendChar(0b00000100);
	LCD_voidSendChar(0b00001010);
	LCD_voidSendChar(0b00001010);
	LCD_voidSendChar(0b00010001);
	LCD_voidSendChar(0b00011111);
	LCD_voidSendChar(0b00000000);
	LCD_voidSendChar(0b00000000);

	/* AC => DDRAM */
	LCD_u8GoToXY(LCD_u8_LINE1,0);
	u8 counter = 0;


	while(505)
	{
		u8 Square;
		u8 Triangle;
		u8 Clr_LCD;
		DIO_u8GetPinValue(0,3, &Square);
		DIO_u8GetPinValue(0,4, &Triangle);
		DIO_u8GetPinValue(0,5, &Clr_LCD);

		if(counter == 16){LCD_u8GoToXY(LCD_u8_LINE2,0);}
		else if(counter == 32){ LCD_voidSendCmnd(0b00000001); LCD_u8GoToXY(LCD_u8_LINE1,0); counter = 0;}


		if(!Triangle)
		{
			LCD_voidSendChar(0);
			_delay_ms(35);
			counter++;

		}
		else if(!Square)
		{
			LCD_voidSendChar(1);
			_delay_ms(35);
			counter++;

		}
		else if(!Clr_LCD)
		{
			// Clear LCD
			LCD_voidSendCmnd(0b00000001);
			_delay_ms(35);


		}
	}

	return 0;
}

