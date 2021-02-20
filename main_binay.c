/*
 * Binary_ATMEGA8.c
 *
 * Created: 2/19/2021 4:46:53 PM
 * Author : Sumit
 */ 

#include <avr/io.h>


int main(void)
{
    DDRB = 0b11111111;
	DDRC = 0b11111111;
	DDRD = 0b11111111;
    while (1) 
    {
		PORTB = 0b10101111;
		PORTC = 0b11111010;
		PORTD = 0b00001111;
    }
}

