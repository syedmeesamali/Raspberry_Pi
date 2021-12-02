#include<Servo.h>
int servo1 = 4;
int servo2 = 5;
int servo3 = 6;
int servo4 = 7;

Servo leg_left;
Servo leg_right;
Servo foot_left;
Servo foot_right;


// the setup routine runs once when you press reset:
void setup() {                
  leg_left.attach(servo1);
  leg_right.attach(servo2);
  foot_left.attach(servo3);
  foot_right.attach(servo4);
}

int val = 0;

void loop() {
  leg_left.write(50);
  delay(50);
  leg_right.write(50);
  delay(50);
  foot_left.write(50);
  delay(50);
  foot_right.write(50);
  delay(2000);
}
