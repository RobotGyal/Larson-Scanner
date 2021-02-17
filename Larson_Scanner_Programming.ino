/*
  Aleia Knight
  Larson Scanner
  Turns on an LED on for one second, then off for one second, repeatedly.
*/

int LEDOn;
int LEDPins[7] = {2, 3, 4, 5, 6, 7, 8};

void setup() 
{                 
for( int i=0; i < 7; i++)
{
  pinMode (LEDPins[i], OUTPUT);
}

  LEDOn = 2;
}

void loop() 
{
   for(int i = 1; i < 6; i++)
   {
     digitalWrite(LEDPins[i],  HIGH);
     delay(50);
     digitalWrite(LEDPins[i], LOW);
   } 
   delay(10);
   
   
   for(int i = 5; i >= 0; i--)
   {
     digitalWrite(LEDPins[i],  HIGH);
     delay(50);
     digitalWrite(LEDPins[i], LOW);
   }

}
