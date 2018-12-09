//Libraries
#include <Wire.h> //Arduino Library for I2C

//Global
#define SLAVE_ADDRESS 0x04 //Addresss of the Arduino 

//Variables
int number[2]; //Array to recieve values
int data; //Number to pass to arduino
int i = 0; //index for array

void setup() {
  Serial.begin(9600); //only needed for debugging
  Wire.begin(SLAVE_ADDRESS); //intialize arduino as slave
  Wire.onRequest(sendData); //set behavior sendTo when data requested
  Wire.onReceive(receiveData); //set behavior receiveData  when data recieved 
}

void loop() {
  //calculations etc can go here no calls for the I2C functions need to happen
}
