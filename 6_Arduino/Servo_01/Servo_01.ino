#include<Servo.h>
int servo1 = 12;
Servo hand;


// the setup routine runs once when you press reset:
void setup() {                
  hand.attach(servo1);
}

int val = 0;

void loop() {
  for (val = 0; val <=120; val++)
  {
    hand.write(val);
    delay(20);
  }
  delay(2000);
  for (val = 120; val >= 0; val--)
  {
    hand.write(val);
    delay(20);
  }
  delay(1500);
}
