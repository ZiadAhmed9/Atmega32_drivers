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
#include "UART.h"

volatile u8 rec_data[20],flag=0;

void f1(void)	//save  the data received each byte in a stack like
{
	static u8 i=0;
	rec_data[i]=UART_ReceiveNoBlock();
	flag++;
	i++;
}
int main(void)
{
	DIO_Init();
	EXI_Init();
	EXI_Enable(EX_INT2);
	UART_init();
	sei();


    while (1) 
    {
			UART_SendStringAsynch("ZIAD");
			_delay_ms(3000);
			UART_SendStringAsynch("Ahmed");
			
			if(flag>0)
			{
			// write here the condition to be executed when an interrupt is done
			flag--;	
			}
    }
}

