/****************************************************/
/**************** Name : Abdullah Elmasry ***********/
/**************** Date : 29/8/2020        ***********/
/**************** SWC  : TIMER            ***********/
/**************** Version : 1.0           ***********/
/****************************************************/


#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

#include "WDT_interface.h"

#define WDTCR         *((volatile u8*)0x41)

void WDT_voidEnable(void)
{
	/* Enable WDT = 2.1 Sec */
	WDTCR = 0b00001111;
}

void WDT_voidDisable(void)
{
	WDTCR |= ((1<<4)|(1<<3));

	WDTCR = 0x00;
}
