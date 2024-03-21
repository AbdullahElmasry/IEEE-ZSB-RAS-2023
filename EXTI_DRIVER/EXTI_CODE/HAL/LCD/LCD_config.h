//######################################################################/
//############### Name : Abdullah Elmasry ##############################/
//############### Date : 19/6/2023        ##############################/
//############### SWC   : LCD              #############################/
//############### Version : 1.00          ##############################/
//######################################################################/

#ifndef LCD_CONFIG_H
#define LCD_CONFIG_H

/*Options : 1-DIO_u8_PORTA
			2-DIO_u8_PORTB
			3-DIO_u8_PORTC
			4-DIO_u8_PORTD
*/

#define LCD_u8_CONTROLE_PORT     DIO_u8_PORTA
#define LCD_u8_Rs_PIN            DIO_u8_PIN0
#define LCD_u8_Rw_PIN            DIO_u8_PIN1
#define LCD_u8_E_PIN             DIO_u8_PIN2

#define LCD_u8_DATA_PORT         DIO_u8_PORTC
#endif
