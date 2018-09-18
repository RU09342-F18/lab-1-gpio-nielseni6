#include <msp430.h>


/**
 * blink.c
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // stop watchdog timer
    P1DIR |= 0x01;                          // configure P1.0 as output
    P1DIR |= BIT6;                          // configure P1.6 as output
    P1DIR &= ~0x08;                         // configure P1.3 as input


    volatile unsigned int i;                // volatile to prevent optimization
    int k = 0;                              // blink speed state: 0 - off, 1 - slow, 2 - medium, 3 - fast
    int j = 0;                              // counter to set blink interval - waits to reach x
    int x = 8;                              // blink interval - the higher the slower the blink
    while(1)
    {
        if (j == (x/2)){                    // waits for j to reach x/2 (blink delay)
            if (k != 0) P1OUT ^= BIT6;      // toggle P1.6(LED)
            if (k == 0) P1OUT &= ~BIT6;     // turn off P1.6(LED)
        }
        if (j >= x){                        // waits for j to reach x (blink delay)
            if (k != 0) P1OUT ^= 0x01;      // toggle P1.0(LED)
            if (k == 0) P1OUT &= ~BIT0;     // turn off P1.0(LED)
            j = 0;                          // resets j for next blink
        } else {
            j++;                            // counts up for j to be used for blink delay
        }
        if (k > 3) k = 0;                   // resets k to 0 once highest state is reached
        if (k == 1) x = 32;                 // set delay time slow
        if (k == 2) x = 16;                 // set delay time medium
        if (k == 3) x = 8;                  // set delay time fast
        if(!(P1IN & BIT3)){                 // checks P1.3 (BUTTON)
            k++;                            // if button is pressed the blink interval goes up
            while (!(P1IN & BIT3));         // waits until button is leg go before continuing
        }
        for(i=(1000); i>0; i--);            // delay
    }
}
