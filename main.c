/*
 * File:   main.c
 * Author: MARWAN
 *
 * Created on April 7, 2020, 9:27 PM
 */


#include <xc.h>
#define LED0  2
#define LED1  7
#define LED2  3

void main(void) {
    DDRC |= (1<<LED0);
    PORTC |= (1<<LED0);
    
    DDRC |= (1<<LED1);
    PORTC |= (1<<LED1);
    
    DDRD |= (1<<LED2);
    PORTD |= (1<<LED2);
    
    return;
}
