/*
 * DCM_config.h
 *
 *  Created on: Jul 25, 2023
 *      Author: asd
 */

#ifndef HAL_DCM_DCM_CONFIG_H_
#define HAL_DCM_DCM_CONFIG_H_

/*Options for Ports: 1- DIO_u8_PORTA
                     2- DIO_u8_PORTB
                     3- DIO_u8_PORTC
                     4- DIO_u8_PORTD
*/

/*Options For Pins:  1- DIO_u8_PIN0
                     2- DIO_u8_PIN1
                     3- DIO_u8_PIN2
                     4- DIO_u8_PIN3
                     5- DIO_u8_PIN4
                     6- DIO_u8_PIN5
                     7- DIO_u8_PIN6
                     8- DIO_u8_PIN7
*/

/* Configurations of the DC Motor */

#define MOTOR_IN1_PORT      DIO_u8_PORTB
#define MOTOR_IN1_PIN       DIO_u8_PIN4
#define MOTOR_IN2_PORT      DIO_u8_PORTB
#define MOTOR_IN2_PIN       DIO_u8_PIN5



#endif /* HAL_DCM_DCM_CONFIG_H_ */
