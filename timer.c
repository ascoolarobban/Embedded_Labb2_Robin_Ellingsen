#include "timer.h"

void timer_init() {
/*
    PWM FREQUENCY:
     16000000/64=250000
    pwm= time0/ top = 250000/255 = 980hz
*/

    //sets time0 to ctc.
    TCCR0A |= (1 << WGM01);
    TCCR0A |= (1 << WGM00);
    //prescale 64.
    TCCR0B |= (1 << CS00) | (1 << CS01);
    //set OC0A at BOTTOM, (non-inverting mode)
    TCCR0A |= (1<<COM0A1);
    //Timer/Counter Register (8-bit)
    TCNT0 = 0;

}