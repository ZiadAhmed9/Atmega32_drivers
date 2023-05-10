/*
 * MemMap.h
 *
 * Created: 5/9/2023 2:47:13 PM
 *  Author: COMPUMARTS
 */ 


#ifndef MEMMAP_H_
#define MEMMAP_H_

#define PORTA (*(volatile unsigned char*)0X3B)
#define DDRA (*(volatile unsigned char*)0X3A)
#define PINA (*(volatile unsigned char*)0X39)


#define PORTB (*(volatile unsigned char*)0X38)
#define DDRB (*(volatile unsigned char*)0X37)
#define PINB (*(volatile unsigned char*)0X36)


#define PORTC (*(volatile unsigned char*)0X35)
#define DDRC (*(volatile unsigned char*)0X34)
#define PINC (*(volatile unsigned char*)0X33)


#define PORTD (*(volatile unsigned char*)0X32)
#define DDRD (*(volatile unsigned char*)0X31)
#define PIND (*(volatile unsigned char*)0X30)

#endif /* MEMMAP_H_ */