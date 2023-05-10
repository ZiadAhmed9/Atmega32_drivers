/*
 * Motors.c
 *
 * Created: 5/11/2023 12:39:25 AM
 *  Author: COMPUMARTS
 */ 
#include "StdTypes.h"
#include "DIO_Interface.h"
#include "Motor_Interface.h"
#include "MOTOR_Cfg.h"



void MOTOR_Init(void)
{

}

void MOTOR_Stop(MOTOR_type motor)
{
	DIO_WritePin(MotorPinsArray[motor][IN1],LOW);
	DIO_WritePin(MotorPinsArray[motor][IN2],LOW);
}

void MOTOR_CW(MOTOR_type motor)
{
	DIO_WritePin(MotorPinsArray[motor][IN1],HIGH);
	DIO_WritePin(MotorPinsArray[motor][IN2],LOW);
}

void MOTOR_CCW(MOTOR_type motor)
{
	DIO_WritePin(MotorPinsArray[motor][IN1],LOW);
	DIO_WritePin(MotorPinsArray[motor][IN2],HIGH);
}