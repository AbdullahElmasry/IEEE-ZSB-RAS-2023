/*
 * GI_program.c
 *
 *  Created on: Jul 30, 2023
 *      Author: asd
 */


/* LIB Layer */
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "GI_interface.h"
#include "../DIO/DIO_interface.h"

/* Enable Global Interrupt Function */
void GI_voidGlobalEnable(void){
	SET_BIT(GI_u8_SREG,7);
}

/* Disable Global Interrupt Function */
void GI_voidGlobalDisable(void){
	CLR_BIT(GI_u8_SREG,7);
}
