/*
 * EXTI_interface.h
 *
 *  Created on: Jul 30, 2023
 *      Author: asd
 */

#include "../../LIB/STD_TYPES.h"


#ifndef EXTI_CODE_MCAL_EXTI_EXTI_INTERFACE_H_
#define EXTI_CODE_MCAL_EXTI_EXTI_INTERFACE_H_

#define EXTI_u8_INT0                       0
#define EXTI_u8_INT1                       1
#define EXTI_u8_INT2                       2

/* Macros For Edge Source */
#define EXTI_u8_RAISING_EDGE               0
#define EXTI_u8_FALLING_EDGE               1
#define EXTI_u8_ANY_LOGICAL_CHANGE         2
#define EXTI_u8_LOW_LEVEL                  3

u8    EXTI_u8Enable(u8 Copy_u8EXTIIndex,u8 Copy_u9EdgeIndex);
u8    EXTI_u8EXTIDisable(u8 Copy_u8EXTIIndex);
u8    EXTI_u8EXTISetCallBack(u8 Copy_u8EXTIIndex, void(*Copy_pf)(void));

#endif /* EXTI_CODE_MCAL_EXTI_EXTI_INTERFACE_H_ */
