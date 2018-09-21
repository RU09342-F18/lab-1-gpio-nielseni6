# Simple Blink
## Microcontroller Used
* MSP430F5529LP

## Functionality

This program blinks two LEDs at different rates. The blink is symmetrical so the LED spends an equal amount of time on and off. The speed of the red LED is twice as fast as the green LED. The speed of the LED blink is determined by the value of the variable x, which is set at the beginning of the program. How this function operates will be explained in the explination section

## Explination

This program operates by first stopping the watchdog timer. This is disabled since it is not used in this program and it could interfere with the functionality. After this P1.0 and P4.7 are set to 1, which means that they are being used as an output. Next the integer variables i, g, r, and x are initiated. i is used for the delay for loop. g is used to count the cycles since the last green LED change, r is used to count the cycles since last red LED change and x is the number of cycles of g and x/2 is the number of cycles of r that will be counted before the LED is changed again. After these variables are initiated, the rest of the code is in an infinitely repeating while loop, so that it will keep repeating and blinking the LEDs. The main part of the program is an if statement that will alternate the value of P1.0 and P1.6 (LEDs) and reset the value of g to 0 if g >= x and r to 0 if r >= x/2. If this is not true g or r are incremented up by 1. After this there is a for loop which is used to delay and then the program returns to the beginning of the while loop to check the if statement again.
