/****************************************************/
/**************** Name : Abdullah Elmasry ***********/
/**************** Date : 29/8/2020   ****************/
/**************** SWC  : TIMERS     *****************/
/**************** Version : 1.0     *****************/
/****************************************************/

#ifndef CODE_MCAL_TIMERS_TIMERS_PRIVATE_H_
#define CODE_MCAL_TIMERS_TIMERS_PRIVATE_H_

/* Registers Define */
#define TIMERS_u8_TIMSK_REG     *((volatile u8*)0x59)
#define TIMERS_u8_TIFR_REG      *((volatile u8*)0x58)
#define TIMERS_u8_TCCR0_REG     *((volatile u8*)0x53)
#define TIMERS_u8_TCNT0_REG     *((volatile u8*)0x52)
#define TIMERS_u8_OCR0_REG      *((volatile u8*)0x5C)

#endif /* CODE_MCAL_TIMERS_TIMERS_PRIVATE_H_ */
