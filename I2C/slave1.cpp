//David Duarte Sanchez
//Tecnologico de Costa Rica
//Taller Sistemas Embebidos
//Minitaller

#include<Wire.h>

int input=0;

void setup()
{
  Wire.begin(1);
  Wire.onReceive(receiveEvent);
  pinMode(13,OUTPUT);
}

void loop()
{
  delay(100);
}

void receiveEvent(int trigger)
{
  input= Wire.read();
  digitalWrite(13,input);
}


//slave program 