//Libraries
#include <Wire.h> //Arduino Library for I2C

//Global
#define SLAVE_ADDRESS 0x04 //Address of the Arduino

//Variables
int number[3]; //Array to store recieved values
int data1; //Value 1 to pass
int data2; //Valuealue 2 to pass
int i = 0; //Index for array 'number'

void setup() {
  Serial.begin(9600); //only needed for debugging
  Wire.begin(SLAVE_ADDRESS); //Initialize arduino as slave 
  Wire.onRequest(sendto); //set behavior sendTo when data requested
  Wire.onReceive(receiveData); //set behavior receiveData  when data recieved 
}

void loop() {
  //calculations etc can go here no calls for the I2C functions need to happen
}
