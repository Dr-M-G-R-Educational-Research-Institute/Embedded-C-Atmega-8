/*
 * basics.c
 *
 * Created: 4/23/2020 11:43:18 PM
 * Author : Sumit
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL // Defining your Crystal Frequency
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRD |= (1<< DDD4); // Data direction Register  0xff and 0x00
	while(1){
		PORTD |= (1<< PD4);
		_delay_ms(1000);
		PORTD &= ~(1<< PD4);
		_delay_ms(1000);
	}
}
