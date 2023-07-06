//######################################################################/
//############### Name : Abdullah Elmasry ##############################/
//############### Date : 19/6/2023        ##############################/
//############### SWC   : LCD              #############################/
//############### Version : 1.00          ##############################/
//######################################################################/

#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

#define LCD_u8_LINE1    1
#define LCD_u8_LINE2    2

void LCD_voidInit(void);

void LCD_voidSendCmnd(u8 Copy_u8Cmnd);

void LCD_voidSendChar(u8 Copy_u8Char);

u8   LCD_u8GoToXY(u8 Copy_u8LineNum, u8 Copy_u8Location);

#endif
