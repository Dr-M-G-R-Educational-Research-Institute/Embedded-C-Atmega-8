# Embedded-C-Atmega-8
ATmega8 microcontroller has 23 programmable input/output (I/O) pins which can be used for interfacing with external world. It is possible to configure them as input or output by setting a particular register value through programming. This IC comes in 3 different packages, but we are using the popular 28-Pin PDIP package (Atmega8-16PU). Note that Atmega8 is available in 2 versions; ATmega8 and Atmega8L. Atmega8L is a low frequency version which works up to 8MHz frequency.

The 23 I/O ports of ATmega8 are organised into 3 groups:

# Port B (PB0 to PB7)
# Port C (PC0 to PC6)
# Port D (PD0 to PD7)
All of these I/O pins have secondary functions, which are shown in parenthesis on the pinout diagram shown here. Each of these registers are 8 bits wide, with each bit corresponding to a single pin (an exception is bit 7 of the Port C register -PC6- most often used as the RESET pin, not an I/O)
