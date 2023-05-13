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
#include "ADC_Interface.h"
int main(void)
{
	ADC_Init(VREF_AREF,ADC_SCALER_64);
	DIO_Init();
	u16 x;
    while (1) 
    {
		x=ADC_Read(CH_0);
    }
}

