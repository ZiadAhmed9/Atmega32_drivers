/*
 * Motor_Interface.h
 *
 * Created: 5/11/2023 12:39:38 AM
 *  Author: COMPUMARTS
 */ 


#ifndef MOTOR_INTERFACE_H_
#define MOTOR_INTERFACE_H_

#define	MOTOR_PIN_NUMBERS 3
#define IN1	0
#define IN2	1
#define EN	2
typedef enum{
	M1=0,
	M2,
	M3,
	NUMBER_MOTORS
}MOTOR_type;

void MOTOR_Init(void);

void MOTOR_Stop(MOTOR_type motor);

void MOTOR_CW(MOTOR_type motor);

void MOTOR_CCW(MOTOR_type motor);


#endif /* MOTOR_INTERFACE_H_ */