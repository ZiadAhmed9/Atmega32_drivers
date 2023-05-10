/*
 * Atmega32_drivers.c
 *
 * Created: 5/10/2023 8:29:36 PM
 * Author : COMPUMARTS
 */ 
#define F_CPU 8000000
#include "StdTypes.h"
#include "Utils.h"
#include "MemMap.h"
#include <util/delay.h>
#include "DIO_Interface.h"
#include "Motor_Interface.h"
int main(void)
{
	DIO_Init();
    while (1) 
    {
		MOTOR_CW(M1);
				MOTOR_CW(M2);

		_delay_ms(3000);
		MOTOR_CCW(M1);
		_delay_ms(3000);
    }
}

