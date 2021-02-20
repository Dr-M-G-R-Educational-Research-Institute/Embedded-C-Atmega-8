# Embedded-C-Atmega-8
ATmega8 microcontroller has 23 programmable input/output (I/O) pins which can be used for interfacing with external world. It is possible to configure them as input or output by setting a particular register value through programming. This IC comes in 3 different packages, but we are using the popular 28-Pin PDIP package (Atmega8-16PU). Note that Atmega8 is available in 2 versions; ATmega8 and Atmega8L. Atmega8L is a low frequency version which works up to 8MHz frequency.

The 23 I/O ports of ATmega8 are organised into 3 groups:

# Port B (PB0 to PB7)
# Port C (PC0 to PC6)
# Port D (PD0 to PD7)
All of these I/O pins have secondary functions, which are shown in parenthesis on the pinout diagram shown here. Each of these registers are 8 bits wide, with each bit corresponding to a single pin (an exception is bit 7 of the Port C register -PC6- most often used as the RESET pin, not an I/O)##
# PINx register
PINx (Port IN) used to read data from port pins. In order to read the data from port pin, first you have to change port’s data direction to input. This is done by setting bits in DDRx to zero. If port is made output, then reading PINx register will give you data that has been output on port pins.

Now there are two input modes. Either you can use port pins as tri stated inputs or you can activate internal pull up. It will be explained shortly.

* Example :

to read data from port A.

DDRA = 0x00;    //Set port a as input

x = PINA;       //Read contents of port a 

# PORTx register
PORTx is used for two purposes.

1) To output data  :  when port is configured as output

When you set bits in DDRx to 1, corresponding pins becomes output pins. Now you can write data into respective bits in PORTx register. This will immediately change state of output pins according to data you have written.
* Example :

to output 0xFF data on port b
DDRB = 0b11111111;        //set all pins of port b as outputs

PORTB = 0xFF;             //write data on port 

# DDRx register
DDRx (Data Direction Register) configures data direction of port pins. Means its setting determines whether port pins will be used for input or output. Writing 0 to a bit in DDRx makes corresponding port pin as input, while writing 1 to a bit in DDRx makes corresponding port pin as output.

* Example:

to make all pins of port A as input pins :

DDRA = 0b00000000;

to make all pins of port A as output pins :

DDRA = 0b11111111;

to make lower nibble of port B as output and higher nibble as input :

DDRB = 0b00001111;
