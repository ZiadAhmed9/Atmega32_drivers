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
#include "EX_Interrupt.h"
#include "Timers.h"

void f1(void)
{
	
}
int main(void)
{
	DIO_Init();
	EXI_Init();
	EXI_Enable(EX_INT2);
	sei();
	TIMER0_Init(TIMER0_FASTPWM_MODE,TIMER0_SCALER_8);
	TIMER0_OC0Mode(OC0_NON_INVERTING);
	Timer1_Init(TIMER1_FASTPWM_ICR_TOP_MODE,TIMER1_SCALER_8);
	Timer1_OCRA1Mode(OCRA_NON_INVERTING);
	Timer1_OCRB1Mode(OCRB_NON_INVERTING);
	TIMER2_Init(TIMER2_FASTPWM_MODE,TIMER2_SCALER_8);
	TIMER2_OC0Mode(OC0_NON_INVERTING);
	OCR0=64;
	ICR1=1000;
	OCR1A=500;
	OCR1B=500;
	OCR2=64;

    while (1) 
    {
			

    }
}

