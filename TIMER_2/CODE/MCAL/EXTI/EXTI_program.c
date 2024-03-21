/*
 * EXTI_program.c
 *
 *  Created on: Jul 30, 2023
 *      Author: Abdullah Elmasry
 */


/* Lib Layer */
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#define F_CPU 8000000UL
#include <util/delay.h>

/* MCAL */
#include "../../MCAL/DIO/DIO_interface.h"

/* HAL */
#include "EXTI_interface.h"
#include "EXTI_private.h"
#include "EXTI_config.h"

/* Global Pointer To Function */
static void (*EXTI_ApfEXTI[3])(void) = { NULL, NULL, NULL };


/***************** NO ADDED MACORS TO REGISTERES YET *****************/

/* Enable EXTI Function */
u8    EXTI_u8Enable(u8 Copy_u8EXTIIndex,u8 Copy_u8EdgeIndex)
{
	u8 Local_u8ErrorState = STD_TYPES_OK;

	switch(Copy_u8EXTIIndex)
	{
		case EXTI_u8_INT0:
			switch(Copy_u8EdgeIndex)
			{
				case EXTI_u8_RAISING_EDGE:
					SET_BIT(EXTI_u8_MCUCR,1);
					SET_BIT(EXTI_u8_MCUCR,0);
					/* Enable EXTI0 */
					SET_BIT(EXTI_u8_GICR,6);
					break;

				case EXTI_u8_FALLING_EDGE:
					SET_BIT(EXTI_u8_MCUCR,1);
					CLR_BIT(EXTI_u8_MCUCR,0);
					/* Enable EXTI0 */
					SET_BIT(EXTI_u8_GICR,6);
					break;

				case EXTI_u8_ANY_LOGICAL_CHANGE:
					CLR_BIT(EXTI_u8_MCUCR,1);
					SET_BIT(EXTI_u8_MCUCR,0);
					/* Enable EXTI0 */
					SET_BIT(EXTI_u8_GICR,6);
					break;

				case EXTI_u8_LOW_LEVEL:
					CLR_BIT(EXTI_u8_MCUCR,1);
					CLR_BIT(EXTI_u8_MCUCR,0);
					/* Enable EXTI0 */
					SET_BIT(EXTI_u8_GICR,6);
					break;
				default : Local_u8ErrorState = STD_TYPES_NOK;
			}
		break;

			case EXTI_u8_INT1:
				switch(Copy_u8EdgeIndex)
				{
					case EXTI_u8_RAISING_EDGE:
						SET_BIT(EXTI_u8_MCUCR,3);
						SET_BIT(EXTI_u8_MCUCR,2);
						/* Enable EXTI0 */
						SET_BIT(EXTI_u8_GICR,7);
						break;

					case EXTI_u8_FALLING_EDGE:
						SET_BIT(EXTI_u8_MCUCR,3);
						CLR_BIT(EXTI_u8_MCUCR,2);
						/* Enable EXTI0 */
						SET_BIT(EXTI_u8_GICR,7);
						break;

					case EXTI_u8_ANY_LOGICAL_CHANGE:
						CLR_BIT(EXTI_u8_MCUCR,3);
						SET_BIT(EXTI_u8_MCUCR,2);
						/* Enable EXTI0 */
						SET_BIT(EXTI_u8_GICR,7);
						break;

					case EXTI_u8_LOW_LEVEL:
						CLR_BIT(EXTI_u8_MCUCR,3);
						CLR_BIT(EXTI_u8_MCUCR,2);
						/* Enable EXTI0 */
						SET_BIT(EXTI_u8_GICR,7);
						break;
					default : Local_u8ErrorState = STD_TYPES_NOK;
				}
			break;

				case EXTI_u8_INT2:
					switch(Copy_u8EdgeIndex)
					{
						case EXTI_u8_RAISING_EDGE:
							SET_BIT(EXTI_u8_MCUCR,6);
							/* Enable EXTI0 */
							SET_BIT(EXTI_u8_GICR,5);
							break;

						case EXTI_u8_FALLING_EDGE:
							SET_BIT(EXTI_u8_MCUCR,6);
							/* Enable EXTI0 */
							SET_BIT(EXTI_u8_GICR,5);
							break;

						default : Local_u8ErrorState = STD_TYPES_NOK;
					}
				break;
				default : Local_u8ErrorState = STD_TYPES_NOK;
	}

	return Local_u8ErrorState;
}



u8    EXTI_u8EXTIDisable(u8 Copy_u8EXTIIndex){
	u8 Local_u8ErrorState = STD_TYPES_OK;

	switch (Copy_u8EXTIIndex)
	{
		case EXTI_u8_INT0 :
			/* Disable EXTI0 */
			CLR_BIT(EXTI_u8_GICR,6);
			break;

		case EXTI_u8_INT1 :
			/* Disable EXTI1 */
			CLR_BIT(EXTI_u8_GICR,7);
			break;

		case EXTI_u8_INT2 :
			/* Disable EXTI2 */
			CLR_BIT(EXTI_u8_GICR,5);
			break;
		default : Local_u8ErrorState = STD_TYPES_NOK;
	}
	return Local_u8ErrorState;
}


u8    EXTI_u8EXTISetCallBack(u8 Copy_u8EXTIIndex, void(*Copy_pf)(void)){
	u8 Local_u8ErrorState = STD_TYPES_OK;
	if((Copy_u8EXTIIndex <= EXTI_u8_INT2) && (Copy_pf != NULL)){
		EXTI_ApfEXTI[Copy_u8EXTIIndex] = Copy_pf;
	}
	else{
		Local_u8ErrorState = STD_TYPES_NOK;
	}
}


/* Prototype for ISR of EXTI0 */
void __vector_1(void)    __attribute__((signal)); // to avoid optimizer changes
void __vector_1(void)
{
	if(EXTI_ApfEXTI[EXTI_u8_INT0] != NULL)
	{
		EXTI_ApfEXTI[EXTI_u8_INT0]();
	}

}

/* Prototype for ISR of EXTI2 */
void __vector_2(void)    __attribute__((signal)); // to avoid optimizer changes
void __vector_2(void)
{
	if(EXTI_ApfEXTI[EXTI_u8_INT1] != NULL)
	{
		EXTI_ApfEXTI[EXTI_u8_INT1]();
	}
}

/* Prototype for ISR of EXTI3 */
void __vector_3(void)    __attribute__((signal)); // to avoid optimizer changes
void __vector_3(void)
{
	if(EXTI_ApfEXTI[EXTI_u8_INT2] != NULL)
	{
		EXTI_ApfEXTI[EXTI_u8_INT2]();
	}
}


