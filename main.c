#include "led.h"
#include "serial.h"
#include "timer.h"



int main (void) {
    int counter = 0;

    timer_init();
    led_init();


    while (1) {
        //Timer/Counter Interrupt Flag Register
        if (TIFR0 & (1 << OCF0A)) {
            TIFR0 |= (1 << OCF0A);
            if (counter == 10) {
                PORTB ^= (1 << BLUE8);
                counter = 0;
            }
            else {
                counter++;
            }
        }
    }
    return 0;
}
