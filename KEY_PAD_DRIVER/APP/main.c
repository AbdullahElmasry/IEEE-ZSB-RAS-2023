#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/KPD/KPD_interface.h"
#include <util/delay.h>
#include"../LIB/STD_TYPES.h"
#include"../MCAL/DIO/DIO_interface.h"
#include "../HAL/KPD/KPD_private.h"
#define F_CPU 8000000UL
#define WRONG 1
#define pass "5000"
#define pass_L 4

u8 main(void)
{
	// CLEAR SCREEN
	LCD_voidSendCmnd(0x01);
	_delay_ms(2);
	LCD_u8GoToXY(LCD_u8_LINE1,0);

	u8 password_is = 0;
	u8 counter = 0;
	u8 index = 0;
	u8 Local_u8key;
	u8 pressed_keys[pass_L];

	// initialization of DIO
	DIO_voidInit();
	// initialization of LCD
	LCD_voidInit();

	LCD_SendString("ENTER YOUR PASS");
	LCD_u8GoToXY(LCD_u8_LINE2,0);


	while(505)
	{
		KPD_u8GetKeyState(&Local_u8key);
		if(Local_u8key != NO_KEY_PRESSED)
		{
			LCD_voidSendChar(Local_u8key);
			counter++;
			pressed_keys[index] = Local_u8key;   //edited
			index++;
		}
		if(counter == pass_L)
		{
			for(int x = 0 ; x < pass_L ; x++ ){
				if(pass[x] != pressed_keys[x])
				{
					password_is = WRONG;
					break;
				}
			}
			if(password_is) // WRONG
			{
				index =0;
				counter=0;
				password_is =0;
				// CLEAR SCREEN
				LCD_voidSendCmnd(0x01);
				 _delay_ms(2);
				LCD_u8GoToXY(LCD_u8_LINE1,0);
				LCD_SendString("Wrong Password");
				LCD_u8GoToXY(LCD_u8_LINE2,0);
				LCD_SendString("Try Again");
				_delay_ms(100);
				// CLEAR SCREEN
				LCD_voidSendCmnd(0x01);
				 _delay_ms(2);
				LCD_u8GoToXY(LCD_u8_LINE1,0);

			}
			else // CORRECT
			{
				// CLEAR SCREEN
				LCD_voidSendCmnd(0x01);
				 _delay_ms(2);
				LCD_u8GoToXY(LCD_u8_LINE1,0);
				LCD_SendString("Correct Password");
				_delay_ms(100);

			}
		}


	}

	return 0;
}
