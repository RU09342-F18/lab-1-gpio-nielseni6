# Off Board Blink

### The video of this circuit operating is named 20180921_082531.mp4 and can be found in the MSP430G2553 folder

## Functionality
This part of this lab involved transferring the processor to a breadboard and wiring the processor to run a program that blinks two LEDs. In order to do this three things needed to be done. The three things that were done were proper power being supplied to the processor, proper reset circuitry and proper bypass and bulk capacitors. When the power turns on the program starts and the LEDs begin blinking. The red LED blinks at twice the rate the green LED blinks. When the button is pressed the processor resets.

## Explination

This processor works the same on a breadboard as it does on the development board. The only difference being that the ports need to be wired by hand. Wiring this up is pretty simple however, as all that is needed to run the program on this board is power ground and reset. The power is hooked up at the top left most pin of the processor to a 3.3V power supply and ground is connected to the top right most pin. The reset button and logic are connected to the fifth pin from the top on the right. That pin is connected to a capacitor that goes to ground, a 4.7kΩ resistor that connects to power and a button that connects to ground. When the button is pressed the reset pin is set to zero and the processor resets. Finally, there are two LEDs connected to P1. There is a green LED connected to P1.0, which is the second pin to the top on the left and there is a red LED that is connected to P1.6 which is the fourth pin from the bottom on the right. This can be seen in OffBoard.PNG which can be found in the MSP430G2553 folder.
