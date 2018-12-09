'''
Pass ints
'''

#Library
from smbus2 import SMBusWrapper	#I2c #has to be installed
from I2C import writeData, readData #import functions from the I2C file
import time

#Global definitions
address = 0x04 # Slave Address, set on Arduino
channel = 1

#Variables
stuff = 8

while True:
        writeData(stuff) #writes int stuff to arduino
        time.sleep(1)
        directions = readData() #reads int from arduino
        print(directions)
        time.sleep(3)
