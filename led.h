#ifndef _LED_H_
#define _LED_H_

#include <avr/io.h>

#define RED_PIN PB3
#define GREEN_PIN PB2
#define BLUE_PIN PB1


enum color {
    RED = RED_PIN,
    GREEN = GREEN_PIN,
    BLUE = BLUE_PIN,
    BLUE8 = PB0
    };


void led_init(void);

#endif