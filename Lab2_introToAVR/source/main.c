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
    /* Insert DDR and PORT initializations */
DORB =0xFF;//Configure prot B's 8 pins as outputs
PORTB=0x00;//Initiallize portB output to 0'x
    /* Insert your solution below */
    while (1) {
PORTB=0x0f;//Writes port B's 8 pins with 00001111
} 
return 1;
} 

