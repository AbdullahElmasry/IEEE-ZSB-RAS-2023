/****************************************************/
/**************** Name : Abdullah Elmasry ***********/
/**************** Date : 29/8/2020   ****************/
/**************** SWC  : TIMERS     *****************/
/**************** Version : 1.0     *****************/
/****************************************************/

#ifndef CODE_MCAL_TIMERS_TIMERS_INTERFACE_H_
#define CODE_MCAL_TIMERS_TIMERS_INTERFACE_H_

void TIMERS_voidTimer0Init(void);

void TIMERS_voidTimer1Init(void);

u8 TIMERS_u8Timer0SetCallBack(void(*Copy_pf)(void));

u8 TIMERS_u8Timer0CTCSetCallBack(void(*Copy_pf)(void));

void TIMERS_voidTimer0SetCompareMatchValue(u8 Copy_u8OCR0Value);

#endif /* CODE_MCAL_TIMERS_TIMERS_INTERFACE_H_ */
