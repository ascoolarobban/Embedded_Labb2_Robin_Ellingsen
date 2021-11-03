#include "timer.h"

void timer_init() {
    //Atmega HZ / Prescale = Timer0
    /*16000000 / 1024 = 15625
   *0,01 * 15625 = 156 - 1
   */

    //sets time0 to ctc.
    TCCR0A |= (1 << WGM01);
    //prescaler 1024
    TCCR0B |= (1 << CS00) | (1 << CS02);
    //output compare register
    OCR0A = 155;
    //Timer/Counter Register (8-bit)
    TCNT0 = 0;

}