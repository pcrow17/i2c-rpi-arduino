//Libraries
#include <Wire.h> //Arduino Library for I2C

//Global
#define SLAVE_ADDRESS 0x04 //Addresss of the Arduino


void sendTo(data1, data2){
  Wire.write(data1); //Write int data1 to bus
  Wire.write(data2); //Write int data2 to bus
}

void receiveData(int byteCount) {
  i=0; //index for arrray of stored passed values
  while(0<Wire.available()){ //reads while wire is available
    number[i] = Wire.read(); //read value from the bus and store in Array[index] 
    i++; //increment index
  }
  //The second number in the array is the first one passed
  //Serial.println(number[1]); //Prints the first recieved number
  //Serial.println(number[2]); //Prints the Second recieved Number
}