#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#define F_CPU  8000000UL
#include <util/delay.h>

/* MCAL */
#include "../../MCAL/DIO/DIO_interface.h"

/* HAL */
#include "DCM_interface.h"
#include "DCM_private.h"
#include "DCM_config.h"

u8 DCM_u8_ROTATE_CW()
{
	DIO_u8SetPinValue(MOTOR_IN1_PORT,MOTOR_IN1_PIN,DIO_u8_HIGH);
	DIO_u8SetPinValue(MOTOR_IN2_PORT,MOTOR_IN2_PIN,DIO_u8_LOW);

	return STD_TYPES_OK;
}

u8 DCM_u8_ROTATE_CCW()
{
	DIO_u8SetPinValue(MOTOR_IN1_PORT,MOTOR_IN1_PIN,DIO_u8_LOW);
	DIO_u8SetPinValue(MOTOR_IN2_PORT,MOTOR_IN2_PIN,DIO_u8_HIGH);

	return STD_TYPES_OK;
}

u8 DCM_u8_ROTATE_STOP()
{
		DIO_u8SetPinValue(MOTOR_IN1_PORT,MOTOR_IN1_PIN,DIO_u8_LOW);
		DIO_u8SetPinValue(MOTOR_IN2_PORT,MOTOR_IN2_PIN,DIO_u8_LOW);

		return STD_TYPES_OK;

}


/********************* FOR HARDWARE PART **********************/

u8 DCM_u8_H_ROTATE_CW()
{
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR1_CW_PIN,DIO_u8_HIGH);
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR2_CW_PIN,DIO_u8_HIGH);
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR1_CCW_PIN,DIO_u8_LOW);
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR2_CCW_PIN,DIO_u8_LOW);

	return STD_TYPES_OK;
}

u8 DCM_u8_H_ROTATE_CCW()
{
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR1_CW_PIN,DIO_u8_LOW);
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR2_CW_PIN,DIO_u8_LOW);
    DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR1_CCW_PIN,DIO_u8_HIGH);
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR2_CCW_PIN,DIO_u8_HIGH);

	return STD_TYPES_OK;
}

u8 DCM_u8_H_ROTATE_STOP()
{
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR1_CW_PIN,DIO_u8_LOW);
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR2_CW_PIN,DIO_u8_LOW);
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR1_CCW_PIN,DIO_u8_LOW);
	DIO_u8SetPinValue(MOTOR_H_PORT,MOTOR_TR2_CCW_PIN,DIO_u8_LOW);

	return STD_TYPES_OK;
}
