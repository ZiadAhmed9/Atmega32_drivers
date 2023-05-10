/*
 * MOTOR_Cfg.h
 *
 * Created: 5/11/2023 12:47:22 AM
 *  Author: COMPUMARTS
 */ 


#ifndef MOTOR_CFG_H_
#define MOTOR_CFG_H_


/*********** PIN CONFIGURATION ***********/
#define M1_IN1 PIND4
#define M1_IN2 PIND5
#define M1_EN PIND0


#define M2_IN1 PINC0
#define M2_IN2 PINC1
#define M2_EN PIND0

#define M3_IN1 PIND0
#define M3_IN2 PIND0
#define M3_EN PIND0


DIO_Pin_type MotorPinsArray[NUMBER_MOTORS][MOTOR_PIN_NUMBERS]={
		   /* IN1	IN2	   EN	*/
/*motor 1*/{M1_IN1,M1_IN2,M1_EN},
/*motor 2*/{M2_IN1,M2_IN2,M2_EN},
/*motor 3*/{M3_IN1,M3_IN2,M3_EN}	
};



#endif /* MOTOR_CFG_H_ */