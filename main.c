/*
 * Input_atmega8.c
 *
 * Created: 2/20/2021 4:24:00 PM
 * Author : Sumit
 */ 
# ifndef F_CPU
# define F_CPU 16000000UL
# endif

#include <avr/io.h>


int main(void)
{
	DDRB = 0b00000000; // Input
	DDRD = 0b11111111; // Output
    /* Replace with your application code */
    while (1) 
    {
		PORTD = PINB;
    }
}

