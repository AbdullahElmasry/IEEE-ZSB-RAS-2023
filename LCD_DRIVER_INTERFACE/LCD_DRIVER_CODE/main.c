

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include "LCD_interface.h"

int main()
{
	DIO_voidInit();

	LCD_voidInit();

	// Printing My Name On The LCD (:
	LCD_voidSendChar('A');
	LCD_voidSendChar('B');
	LCD_voidSendChar('D');
//	LCD_voidSendChar('U');
//	LCD_voidSendChar('L');
//	LCD_voidSendChar('L');
//	LCD_voidSendChar('A');
//	LCD_voidSendChar('H');

	while(1);

	return 0;
}
