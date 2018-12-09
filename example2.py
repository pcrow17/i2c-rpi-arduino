'''
Pass Arrays
'''

#Library
from smbus2 import SMBusWrapper	#I2c #has to be installed
from I2C import writeBlock, readBlock #import functions from the I2C file
import time

#Global definitions
address = 0x04 # Slave Address, set on Arduino
channel = 1

#Variables
stuff = [8, 6]

while True:
        writeBlock(stuff) #writes array stuff to arduino
        time.sleep(1)
        directions = readBlock(2) #reads 2 byte array from arduino
        print(directions)
        time.sleep(2)