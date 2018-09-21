# Simple Blink
## Microcontrollers Used
* MSP430G2553
* MSP430F5529LP

## Functionality

This program blinks one LED at a rate of about 3* Hz. The blink is symmetrical so the LED spends an equal amount of time on and off. The speed of the LED blink is determined by the value of the variable x, which is set at the beginning of the program. How this function operates will be explained in the explination section

## Explination

This program operates by first stopping the watchdog timer. This is disabled since it is not used in this program and it could interfere with the functionality. After this P1.0 is set to 1, which means it is being used as an output. Next the integer variables i, g, and x are initiated. i is used for the delay for loop. g is used to count the cycles since the last LED change, and x is the number of cycles of g that will be counted before the LED is changed again. After these variables are initiated, the rest of the code is in an infinitely repeating while loop, so that it will keep repeating and blinking the LED. The main part of the program is an if statement that will alternate the value of P1.0 (LED) and reset the value of g to 0 if g >= x. If this is not true g is incremented up by 1. After this there is a for loop which is used to delay and then the program returns to the beginning of the while loop to check the if statement again.





*Number subject to change
