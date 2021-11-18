#include<Servo.h>
int servo1 = 4;
int servo2 = 5;
Servo rightone;
Servo leftone;


// the setup routine runs once when you press reset:
void setup() {                
  rightone.attach(servo1);
  leftone.attach(servo2);
}

int val = 0;

void loop() {
  rightone.write(30);
  delay(50);
  rightone.write(120);
  delay(50);
  leftone.write(60);
  delay(50);
  leftone.write(30);
  delay(50);
  rightone.write(150);
  delay(1500);
}
