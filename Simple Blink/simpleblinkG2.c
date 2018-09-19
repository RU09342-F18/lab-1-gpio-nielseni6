#include <msp430.h>


/**
 * simpleblink.c
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // stop watchdog timer
    P1DIR |= 0x01;                          // configure P1.0 as output

    volatile unsigned int i;                // volatile to prevent optimization
    int g = 0;                              // counter to set green led blink interval - waits to reach x
    int x = 32;                             // blink interval - the higher the slower the blink
    while(1)
    {
        if (g >= x){                        // waits for g to reach x (blink delay)
            P1OUT ^= 0x01;                  // toggle P1.0(LED)
            g = 0;                          // resets g for next blink
        } else {
            g++;                            // counts up for g to be used for blink delay
        }
        for(i=(1000); i>0; i--);            // delay
    }
}
