/*
 * main.c
 *
 *  Created on: Jul 9, 2023
 *      Author: asd
 */
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/KPD/KPD_interface.h"
#include <util/delay.h>
#include"../LIB/STD_TYPES.h"
#include"../MCAL/DIO/DIO_interface.h"
#include "../HAL/KPD/KPD_private.h"
#define F_CPU 8000000UL
#define CORRECT 1
#define WRONG 0
#define pass "1810"
#define pass_L 4

u8 main(void)
{
	// CLEAR SCREEEN
	LCD_viodSendCmnd(0x01);
	LCD_u8GoToXY(LCD_u8_LINE1,0);
	u8 password_is;
	u8 counter = 0;
	u8 index = 0;
	u8 Local_u8key;
	// initialization of DIO
	DIO_voidInit();
	// initialization of LCD
	LCD_voidInit();
	LCD_SendString("ENTER YOUR PASS");


	while(505)
	{
		u8 pressed_keys[pass_L];
		KPD_u8GetKeyState(&Local_u8key);
		if(Local_u8key != NO_KEY_PRESSED)
		{
			LCD_voidSendChar(Local_u8key);
			counter++;
			index++;
			pressed_keys[index] = Local_u8key;
		}
		if(counter == pass_L)
		{
			for(int x =0 ; x<pass_L ; x++ ){
				if(pass[x] == pressed_keys[x])
				{
					password_is = CORRECT;
					break;
				}
			}
		}

		if(password_is) // CORRECT
		{
			// CLEAR SCREEEN
			LCD_viodSendCmnd(0x01);
			LCD_u8GoToXY(LCD_u8_LINE1,0);
			LCD_SendString("Correct Password");
			_delay_ms(1500);
			// CLEAR SCREEEN
			LCD_viodSendCmnd(0x01);
		}
		else
		{
			// CLEAR SCREEEN
			LCD_viodSendCmnd(0x01);
			LCD_u8GoToXY(LCD_u8_LINE1,0);
			LCD_SendString("Wrong Password");
			LCD_u8GoToXY(LCD_u8_LINE2,0);
			LCD_SendString("Try Again");
			_delay_ms(1500);
			// CLEAR SCREEEN
			LCD_viodSendCmnd(0x01);
		}
	}

	return 0;
}





