/*
 * main.c
 *
 *  Created on: Jul 9, 2023
 *      Author: Abdullah Elmasry
 */

/*
 * main.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Abdullah Elmasry
 */

#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/KPD/KPD_interface.h"
#include "../HAL/KPD/KPD_private.h"
#include <util/delay.h>
#include"../LIB/STD_TYPES.h"
#include"../LIB/BIT_MATH.h"
#include"../MCAL/DIO/DIO_interface.h"
#include "../MCAL/GI/GI_interface.h"
#include "../MCAL/EXTI/EXTI_interface.h"
//#include "../HAL/DCM/DCM_interface.h"
#define F_CPU 8000000UL
#define WRONG 1
#define pass "505"
#define pass_L 3

u8 globalState = 0;

//TAKE OPTION FROM USER
void Get_User_Option(u8 *number)
{
	while(505){
		KPD_u8GetKeyState(number);
		if(*number == '1' || *number == '2' || *number == '3'){
			break;
		}
	}
}

void System_ON(void){
		u8 INT_State = 1;
		DIO_u8GetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,&INT_State);
		if(INT_State == DIO_u8_LOW){
			globalState = 1;
		}
}


u8 main(void)
{
	//CLEAR SCREEEN
	LCD_voidSendCmnd(0x01);
	_delay_ms(2);

	u8 password_is = 0;
	u8 counter = 0;
	u8 index = 0;
	u8 Local_u8key;
	u8 pressed_keys[pass_L];
	u8 number;

	// initialization of DIO
	DIO_voidInit();
	// initialization of LCD
	LCD_voidInit();
	//initialization of Global Interrupt
	GI_voidGlobalEnable();
	//Set CallBack Function
	EXTI_u8EXTISetCallBack(EXTI_u8_INT0,&System_ON);
	//Initialization of EXTI
	EXTI_u8Enable(EXTI_u8_INT0,EXTI_u8_ANY_LOGICAL_CHANGE);

	LCD_SendString("PRESS THE BUTTON");
	LCD_u8GoToXY(LCD_u8_LINE2,0);
	LCD_SendString("TO START");

	while(1){
		if(globalState == 1){
			break;
		}
	}


	//CLEAR SCREEEN
	LCD_voidSendCmnd(0x01);
	_delay_ms(2);
	LCD_u8GoToXY(LCD_u8_LINE1,0);
	LCD_SendString("ENTER YOUR PASS");
	LCD_u8GoToXY(LCD_u8_LINE2,0);


	while(505)
	{
		KPD_u8GetKeyState(&Local_u8key);
		if(Local_u8key != NO_KEY_PRESSED)
		{
			LCD_voidSendChar('*');
			counter++;
			pressed_keys[index] = Local_u8key;
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
				// CLEAR SCREEEN
				LCD_voidSendCmnd(0x01);
				 _delay_ms(2);
				LCD_u8GoToXY(LCD_u8_LINE1,0);
				LCD_SendString("Wrong Password");
				LCD_u8GoToXY(LCD_u8_LINE2,0);
				LCD_SendString("Try Again");
				_delay_ms(2500);
				// CLEAR SCREEEN
				LCD_voidSendCmnd(0x01);
				 _delay_ms(2);
				LCD_u8GoToXY(LCD_u8_LINE1,0);
				LCD_SendString("ENTER YOUR PASS");
				LCD_u8GoToXY(LCD_u8_LINE2,0);

			}
			else // CORRECT
			{
				// CLEAR SCREEEN
				LCD_voidSendCmnd(0x01);
				 _delay_ms(2);
				LCD_u8GoToXY(LCD_u8_LINE1,0);
				LCD_SendString("CORRECT PASSWORD");
				_delay_ms(100);
				// CLEAR SCREEEN
				LCD_voidSendCmnd(0x01);
				 _delay_ms(2);
				LCD_u8GoToXY(LCD_u8_LINE1,0);
				LCD_SendString("WELCOME TO MOTOR");
				LCD_u8GoToXY(LCD_u8_LINE2,2);
				LCD_SendString("DASHBOARD");
				_delay_ms(100);
				// CLEAR SCREEEN
				LCD_voidSendCmnd(0x01);
				 _delay_ms(2);
				LCD_u8GoToXY(LCD_u8_LINE1,0);
				LCD_SendString("1-DC MOTOR 3-EXT");
				LCD_u8GoToXY(LCD_u8_LINE2,0);
				LCD_SendString("2-STR MOTOR");


				Get_User_Option(&number);
				if(number == '1') // DC Motor
				{
					// CLEAR SCREEEN
					LCD_voidSendCmnd(0x01);
					_delay_ms(2);
					LCD_SendString("1-CLOCK WISE");
					LCD_u8GoToXY(LCD_u8_LINE2,0);
					LCD_SendString("2-C CLOCK WISE");
					Get_User_Option(&number);
					if(number == '1'){
						DCM_u8_H_ROTATE_CW();
					}
					else{
						DCM_u8_H_ROTATE_CCW();
					}
					// CLEAR SCREEEN
					LCD_voidSendCmnd(0x01);
					_delay_ms(2);
					LCD_SendString("END TASK");
					break;
				}
				else if(number == '2') // Stepper Motor
				{
					// CLEAR SCREEEN
					LCD_voidSendCmnd(0x01);
					_delay_ms(2);
					LCD_SendString("1-CLOCK WISE");
					LCD_u8GoToXY(LCD_u8_LINE2,0);
					LCD_SendString("2-C CLOCK WISE");
					Get_User_Option(&number);
					if(number == 1){STM_u8_Rotate_CW();}
					else{STM_u8_Rotate_CCW();}
					// CLEAR SCREEEN
					LCD_voidSendCmnd(0x01);
					_delay_ms(2);
					LCD_SendString("END TASK");
					break;

				}
				else{
					// CLEAR SCREEEN
					LCD_voidSendCmnd(0x01);
					_delay_ms(2);
					LCD_SendString("END TASK");
					break;
				}
			}
		}
	}

	return 0;
}
