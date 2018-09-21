# Button Blink
## Microcontrollers Used
* MSP430FR2311

## Functionality

This program blinks one LED at four different rates, off - slow - medium - fast. The speed of the LED blink is determined by the value of the variable x, which is changed when when the button is pressed. How this function operates will be explained in the explination section.

## Explination

This program operates by first stopping the watchdog timer. This is disabled since it is not used in this program and it could interfere with the functionality. After this P1.0 is set to 1, which means it is being used as an output. Next the integer variables i, k, g and x are initiated. i is used for the delay for loop. k is used to keep track of what state (off - slow - medium - fast) the LED should be in. g is used to count the cycles since the last LED change. x is the number of cycles of g that will be counted before the LED is changed again. After these variables are initiated, the rest of the code is in an infinitely repeating while loop, so that it will keep repeating and blinking the LED. The main part of the program is an if statement that will alternate the value of P1.0 (LED) if k != 0 or turn off P1.0 if k == 0 and reset the value of g to 0 if g >= x. If g is not greater than or equal to x, g is incremented up by 1. Next the value of k is checked. If k > 3 the value of k is reset to 0, which is the off state. If k == 1 then x is set to 32, if k == 2 then x is set to 16, and if k == 3 then x is set to 8. Those values respectively are slow, medium and fast. After this the button is checked. If the button is pressed then k is incremented by 1. The program then pauses using a while loop that waits until the button is let go before continuing. After this there is a for loop which is used as a delay and then the program returns to the beginning of the while loop.
