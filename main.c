#include <util/delay.h>
#include "led.h"
#include "timer.h"



int main (void) {
    int counter = 0;

    timer_init();
    led_init();


    while (1) {
        OCR0A = 100;
        _delay_ms(1000);
        OCR0A = 50;
        _delay_ms(1000);
        OCR0A = 200;
        _delay_ms(1000);

    }
    return 0;
}
