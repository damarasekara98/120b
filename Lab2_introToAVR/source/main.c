/*	Author: damar002
 *  Partner(s) Name: Dilini Amarasekara
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
int main(void) {
 
DDRA = 0x00;PORTA = 0xFF;//initialize port A as inputs
DDRB = 0xFF;PORTB = 0x00;//initialize por tB as outputs
unsigned char tempA = 0x00;//for PA0
unsigned char tempB = 0x00;//for PA1
    
    while (1) {
tempA = PINA & 0x01;
tempB = PINA & 0x02;

	if(tempA==0x01 & tempB==0x00){
	PORTB=0x01;
		
}
} 
return 1;
} 

