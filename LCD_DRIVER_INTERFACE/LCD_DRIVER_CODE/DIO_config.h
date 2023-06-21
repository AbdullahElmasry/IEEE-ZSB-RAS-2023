/*  *///######################################################################/
//############### Name : Abdullah Elmasry ##############################/
//############### SW   : DIO              ##############################/
//############### Version : 1.00          ##############################/
//######################################################################/


#ifndef DIO_CONFIG_H
#define DIO_CONFIG_H
/*Initial Directions For All Pins*/
/*Options: DIO_u8_INITIAL_OUTPUT
           DIO_u8_INITIAL_INPUT*/
/*PORTA*/
#define DIO_u8_PA0_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
#define DIO_u8_PA1_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
#define DIO_u8_PA2_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
#define DIO_u8_PA3_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PA4_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PA5_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PA6_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PA7_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
/*PORTB*/
#define DIO_u8_PB0_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PB1_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PB2_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PB3_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PB4_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PB5_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PB6_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PB7_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
/*PORTC*/
#define DIO_u8_PC0_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PC1_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PC2_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PC3_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PC4_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PC5_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PC6_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
#define DIO_u8_PC7_INITIAL_DIRECTION                    DIO_U8_INITIAL_INPUT
/*PORTD*/
#define DIO_u8_PD0_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
#define DIO_u8_PD1_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
#define DIO_u8_PD2_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
#define DIO_u8_PD3_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
#define DIO_u8_PD4_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
#define DIO_u8_PD5_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
#define DIO_u8_PD6_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
#define DIO_u8_PD7_INITIAL_DIRECTION                    DIO_U8_INITIAL_OUTPUT
/*Initial Values For All Pins*/
/*Options: DIO_u8_OUTPUT_HIGH
           DIO_u8_OUTPUT_LOW
           DIO_u8_INPUT_FLOATING
           DIO_u8_INPUT_PULLUP
           */
/*PORTA*/
#define DIO_u8_PA0_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PA1_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PA2_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PA3_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PA4_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PA5_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PA6_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PA7_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
/*PORTB*/
#define DIO_u8_PB0_INITIAL_VALUE                        DIO_U8_OUTPUT_LOW
#define DIO_u8_PB1_INITIAL_VALUE                        DIO_U8_OUTPUT_LOW
#define DIO_u8_PB2_INITIAL_VALUE                        DIO_U8_OUTPUT_LOW
#define DIO_u8_PB3_INITIAL_VALUE                        DIO_U8_OUTPUT_LOW
#define DIO_u8_PB4_INITIAL_VALUE                        DIO_U8_OUTPUT_LOW
#define DIO_u8_PB5_INITIAL_VALUE                        DIO_U8_OUTPUT_LOW
#define DIO_u8_PB6_INITIAL_VALUE                        DIO_U8_OUTPUT_LOW
#define DIO_u8_PB7_INITIAL_VALUE                        DIO_U8_OUTPUT_LOW
/*PORTC*/
#define DIO_u8_PC0_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PC1_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PC2_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PC3_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PC4_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PC5_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PC6_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
#define DIO_u8_PC7_INITIAL_VALUE                        DIO_U8_INPUT_FLOATING
/*PORTD*/
#define DIO_u8_PD0_INITIAL_VALUE                        DIO_u8_OUTPUT_LOW
#define DIO_u8_PD1_INITIAL_VALUE                        DIO_u8_OUTPUT_LOW
#define DIO_u8_PD2_INITIAL_VALUE                        DIO_u8_OUTPUT_LOW
#define DIO_u8_PD3_INITIAL_VALUE                        DIO_u8_OUTPUT_LOW
#define DIO_u8_PD4_INITIAL_VALUE                        DIO_u8_OUTPUT_LOW
#define DIO_u8_PD5_INITIAL_VALUE                        DIO_u8_OUTPUT_LOW
#define DIO_u8_PD6_INITIAL_VALUE                        DIO_u8_OUTPUT_LOW
#define DIO_u8_PD7_INITIAL_VALUE                        DIO_u8_OUTPUT_LOW


#endif
