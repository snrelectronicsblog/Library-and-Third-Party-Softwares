#include "Ultrasonic.h"
Ultrasonic ultrasonic(2,3);//Digital pin 2 is Trig and 3 is Echo.

void setup() {
Serial.begin(9600);
}

void loop()
{
  Serial.print(ultrasonic.Ranging(CM));
  Serial.print("cm");
  Serial.print('\r');
    
  delay(100);
}




