/*
 * EXTI_private.h
 *
 *  Created on: Jul 30, 2023
 *      Author: asd
 */

#ifndef EXTI_CODE_MCAL_EXTI_EXTI_PRIVATE_H_
#define EXTI_CODE_MCAL_EXTI_EXTI_PRIVATE_H_

/* Define for EXTI Registers */

#define EXTI_u8_MCUCR            *((volatile u8 *)0x55)
#define EXTI_u8_MCUCSR           *((volatile u8 *)0x54)
#define EXTI_u8_GICR             *((volatile u8 *)0x5B)
#define EXTI_u8_GIFR             *((volatile u8 *)0x5A)

#endif /* EXTI_CODE_MCAL_EXTI_EXTI_PRIVATE_H_ */
