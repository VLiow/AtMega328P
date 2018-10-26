


![](https://i.imgur.com/pysHzzK.jpg)

This is an LCD display, the labels on the top (disregard my bad soldering works) are how the LCD functions when connected to the Arduino.

VSS: connected to ground

VDD: connected to a +5V power supply
VO: to adjust the contrast

RS: A register select pin that controls where in the LCD’s memory you are writing data to. You
can select either the data register, which holds what goes on the screen, or an instruction
register, which is where the LCD’s controller looks for instructions on what to do next.

R/W: A Read/Write pin to select between reading and writing mode

E: An enabling pin that, when low-level energy is supplied, causes the LDC module to
execute relevant instructions.

D0-D7: to read and write data

A and K: Pins that control the LCD backlight

![](https://i.imgur.com/yfwxRkWm.jpg)
