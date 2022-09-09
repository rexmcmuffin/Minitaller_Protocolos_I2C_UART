//David Duarte Sanchez
//Tecnologico de Costa Rica
//Taller Sistemas Embebidos
//Minitaller

#include<Wire.h>
int input1;
int input2;
int input3;


void setup()
{
  Wire.begin();
  pinMode(7,INPUT);
  pinMode(6,INPUT);
  pinMode(5,INPUT);
}

void loop()
{
  input1=digitalRead(7);
  input2=digitalRead(6);
  input3=digitalRead(5);
  
  if (input1==HIGH)
  {
    Wire.beginTransmission(1);
    Wire.write(input1);
    Wire.endTransmission(1);
    delay(100); // Wait for 1000 millisecond(s)
  }
  
  if (input2==HIGH)
  {
    Wire.beginTransmission(2);
    Wire.write(input2);
    Wire.endTransmission(2);
    delay(100); // Wait for 1000 millisecond(s)
  }
  
  if (input3==HIGH)
  {
    Wire.beginTransmission(3);
    Wire.write(input3);
    Wire.endTransmission(3);
    delay(100); // Wait for 1000 millisecond(s)
  }
}

//master program