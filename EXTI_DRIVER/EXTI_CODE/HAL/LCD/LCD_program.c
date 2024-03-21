//######################################################################/
//############### Name : Abdullah Elmasry ##############################/
//############### Date : 19/6/2023        ##############################/
//############### SWC   : LCD             ##############################/
//############### Version : 1.00          ##############################/
//######################################################################/

/* Lib Layer */
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#define F_CPU 8000000UL
#include <util/delay.h>

/* MCAL */
#include "../../MCAL/DIO/DIO_interface.h"

/* HAL */
#include "LCD_interface.h"
#include "LCD_private.h"
#include "LCD_config.h"

void LCD_voidInit(void)
{
	_delay_ms(35);
	/* Function Set Cmnd */
	LCD_voidSendCmnd(0b00111000);
	_delay_us(40);
	LCD_voidSendCmnd(0b00001111);
	_delay_us(40);
	LCD_voidSendCmnd(0b00000001);
	_delay_ms(2);
	LCD_voidSendCmnd(0b00000110);
}

void LCD_voidSendCmnd(u8 Copy_u8Cmnd)
{
		//  Rs = 0
		DIO_u8SetPinValue(LCD_u8_CONTROLE_PORT , LCD_u8_Rs_PIN ,DIO_u8_LOW); // portA, Pin0 ,LOW
		//  Rw = 0
		DIO_u8SetPinValue(LCD_u8_CONTROLE_PORT , LCD_u8_Rw_PIN ,DIO_u8_LOW); // portA, Pin1 ,LOW
		/* Write Cmnd */
		DIO_u8SetPortValue(LCD_u8_DATA_PORT , Copy_u8Cmnd); // Port D
		// E = 1
		DIO_u8SetPinValue(LCD_u8_CONTROLE_PORT , LCD_u8_E_PIN ,DIO_u8_HIGH); // portA, Pin2 ,HIGH
		_delay_us(1);
		// E = 0
		DIO_u8SetPinValue(LCD_u8_CONTROLE_PORT , LCD_u8_E_PIN ,DIO_u8_LOW); // portA, Pin2 ,LOW
}

void LCD_voidSendChar(u8 Copy_u8Char)
{
		// STEP 1 Rs = 1
		DIO_u8SetPinValue(LCD_u8_CONTROLE_PORT , LCD_u8_Rs_PIN ,DIO_u8_HIGH); // portA, Pin0 , HIGH
		// step 2 Rw = 0
		DIO_u8SetPinValue(LCD_u8_CONTROLE_PORT , LCD_u8_Rw_PIN ,DIO_u8_LOW); // portA, Pin1 , LOW
		/* Write Char */
		DIO_u8SetPortValue(LCD_u8_DATA_PORT , Copy_u8Char); // Port D
		// E = 1
		DIO_u8SetPinValue(LCD_u8_CONTROLE_PORT , LCD_u8_E_PIN ,DIO_u8_HIGH); // portA, Pin2 , HIGH
		_delay_us(1);
		// E = 0
		DIO_u8SetPinValue(LCD_u8_CONTROLE_PORT , LCD_u8_E_PIN ,DIO_u8_LOW); // portA, Pin2 , LOW
}

u8 LCD_u8GoToXY(u8 Copy_u8LineNum, u8 Copy_u8Location)
{
	u8 Local_u8ErrorState = STD_TYPES_OK;
	if(Copy_u8Location <= 39)
	{
		switch (Copy_u8LineNum)
		{
			case LCD_u8_LINE1 : LCD_voidSendCmnd(0x80+Copy_u8Location);break;
			case LCD_u8_LINE2 : LCD_voidSendCmnd(0xc0+Copy_u8Location);break;
			default : Local_u8ErrorState = STD_TYPES_NOK;
		}
	}
	else
	{
		Local_u8ErrorState = STD_TYPES_NOK;
	}
	return Local_u8ErrorState;
}

u8 LCD_SendString(u8 * Copy_pu8_String){
    for(u8 i=0 ; Copy_pu8_String[i] != '\0' ; i++ ){
    	LCD_voidSendChar(Copy_pu8_String[i]);
    }
    return STD_TYPES_OK;
}

