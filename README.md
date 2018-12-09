# i2c-rpi-arduino
I2C functions and example code for communicating between Raspberry Pi's and Arduino based microcontrollers
Raspberry Pi is setup as Master, Arduino(s) is/are setup as Slave(s)

# Setup
All that is required is two 1K resistors, one on each of the I2C lines to pullup the lines to 5v. 
The rest of the setup is just connecting the SDA to SDA and SDL to SDL. 

#### Rpi
* SDA - Pin 2
* SCL - Pin 3

#### Arduino Uno
* SDA - Pin A4
* SCL - Pin A5

#### Arduino Nano
* SDA - Pin A4
* SCL - Pin A5

#### Arduino Due
* SDA - Pin A18
* SCL - Pin A17

#### Arduino Mega
* SDA - Pin SDA 20
* SCL - Pin SCL 21

### Note About I2C
I2C is a bus so multiple slave Arduino's can be setup with the RPI as the master.
