#include <msp430.h>				


/**
 * multipleblinkF5529.c
 */
void multipleblinkF5529(void)
{
    WDTCTL = WDTPW | WDTHOLD;	            // stop watchdog timer
    P1DIR |= 0x01;		            // configure P1.0 as output
    P4DIR |= BIT7;                          // configure P4.7 as output

    volatile unsigned int i;                // volatile to prevent optimization
    int g = 0;                              // counter to set green led blink interval - waits to reach x
    int r = 0;                              // counter to set red led blink interval - waits to reach x/2
    int x = 32;                             // blink interval - the higher the slower the blink
    while(1)
    {
        if (r >= (x/2)){                    // waits for g to reach x/2 (blink delay)
            P4OUT ^= BIT7;                  // toggle P1.6(LED)
            r = 0;                          // resets r for next blink
        } else {
            r++;                            // counts up for r to be used for blink delay
        }
        if (g >= x){                        // waits for g to reach x (blink delay)
            P1OUT ^= 0x01;                  // toggle P1.0(LED)
            g = 0;                          // resets g for next blink
        } else {
            g++;                            // counts up for g to be used for blink delay
        }
        for(i=(1000); i>0; i--);            // delay
    }
}

