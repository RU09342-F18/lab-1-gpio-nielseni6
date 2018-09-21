# Off Board Blink
Now that we have the whole blinking LED out of the way, why don't we try making things a little more convenient by taking the G2553 off the development board and into a breadboard. In addition to the software, your README needs to also contain a picture of your circuit with at least 2 LEDs blinking all on a breadboard and without a development board. This means that you will need:
* Proper power being supplied to the processor
* Proper Reset Circuitry
* Proper Bypass and Bulk Capacitors as needed

Please be advised that you can easily damage or destroy one of the pins on the MSP430 by applying the wrong voltage or attempting to draw too much current from it. Really check your design before you power up to ensure you do not need request another processor.

## "Do I need to use a power supply to power this thing?"
In the beginning part of the exercise, I would say that you can use the 5V/3.3V rails built into the development board by running wires. However, I would recommend looking into how to supply the processor from something like a battery or the power supply. You might want to look into different types of regulators. For example, your circuits may be powered off of a battery that is only 1.8V, or on a system that can only supply you with 13V.

## "What about the buttons and resistors and LEDS?"
You remember those parts bins in the back of the teaching labs? They contain most everything you will need to do this portion of the lab. You should really make a effort to try and replicate what is on those development boards on the breadboard so you can begin to see what is needed to design with a microcontroller. Mess around with different color LEDS and see if they behave the same as the simple Red LEDs.

# YOU NEED TO CREATE THE FOLLOWING FOLDER
* MSP430G2553

