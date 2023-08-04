#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#define F_CPU 8000000UL
#include <util/delay.h>

/* MCAL */
#include "../../MCAL/DIO/DIO_interface.h"

/* HAL */
#include "STM_interface.h"
#include "STM_config.h"


u8 STM_u8_Rotate_CW()
{
	// FIRST STEP
	DIO_u8SetPinValue(STM_PORT,STM_C1,DIO_u8_LOW);
	DIO_u8SetPinValue(STM_PORT,STM_C2,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C3,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C4,DIO_u8_HIGH);
	_delay_ms(10);

	// SECOND STEP
	DIO_u8SetPinValue(STM_PORT,STM_C1,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C2,DIO_u8_LOW);
	DIO_u8SetPinValue(STM_PORT,STM_C3,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C4,DIO_u8_HIGH);
	_delay_ms(10);

	// FOURTH STEP
	DIO_u8SetPinValue(STM_PORT,STM_C1,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C2,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C3,DIO_u8_LOW);
	DIO_u8SetPinValue(STM_PORT,STM_C4,DIO_u8_HIGH);
	_delay_ms(10);

	// FOURTH STEP
	DIO_u8SetPinValue(STM_PORT,STM_C1,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C2,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C3,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C4,DIO_u8_LOW);
	_delay_ms(10);


	return STD_TYPES_OK;
}

u8 STM_u8_Rotate_CCW()
{
	// FIRST STEP
	DIO_u8SetPinValue(STM_PORT,STM_C1,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C2,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C3,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C4,DIO_u8_LOW);
	_delay_ms(10);

	// SECOND STEP
	DIO_u8SetPinValue(STM_PORT,STM_C1,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C2,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C3,DIO_u8_LOW);
	DIO_u8SetPinValue(STM_PORT,STM_C4,DIO_u8_HIGH);
	_delay_ms(10);

	// THIRD STEP
	DIO_u8SetPinValue(STM_PORT,STM_C1,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C2,DIO_u8_LOW);
	DIO_u8SetPinValue(STM_PORT,STM_C3,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C4,DIO_u8_HIGH);
	_delay_ms(10);

	// FORTH STEP
	DIO_u8SetPinValue(STM_PORT,STM_C1,DIO_u8_LOW);
	DIO_u8SetPinValue(STM_PORT,STM_C2,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C3,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C4,DIO_u8_HIGH);
	_delay_ms(10);

	return STD_TYPES_OK;
}

u8 STM_u8_STOP()
{
	// STOP STEPPER MOTOR
	DIO_u8SetPinValue(STM_PORT,STM_C1,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C2,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C3,DIO_u8_HIGH);
	DIO_u8SetPinValue(STM_PORT,STM_C4,DIO_u8_HIGH);
	_delay_ms(10);

	return STD_TYPES_OK;
}
