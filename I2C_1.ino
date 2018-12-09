//Libraries
#include <Wire.h> //Arduino Library for I2C

//Global
#define SLAVE_ADDRESS 0x04 //Addresss of the Arduino


void sendData(data){
  Wire.write(data); //Write int data to bus
}

void receiveData(int byteCount) {
  i=0; //index for arrray of stored passed values
  while(0<Wire.available()){ //reads while wire is available
    number[i] = Wire.read(); //read value from the bus and store in Array[index] 
    i++; //increment index
  }
  //Second number in array will be the passed number
  //Serial.println(number[1]); //Prints the recieved number
}