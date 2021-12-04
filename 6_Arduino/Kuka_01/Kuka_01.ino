#include<Servo.h>
int base = 4;
int Larm = 5;
int Uarm = 6;
int head = 7;
int gripper = 8;

Servo base1;
Servo Larm1;
Servo Uarm1;
Servo head1;
Servo gripper1;

int val = 0;
int pos = 0;

// the setup routine runs once when you press reset:
void setup() {                
  base1.attach(base);
  Larm1.attach(Larm);
  Uarm1.attach(Uarm);
  head1.attach(head);
  gripper1.attach(gripper);
  Serial.begin(9600);
}

//Main run loop
void loop() {
  if (Serial.available())
  {
    val = Serial.read();    //Read the serial value sent from C# app
  }
  
  if (val == '1')
  {
    Serial.println("Value 1 is received! Move base to 90deg");
    base1.write(90);      //Most probably some reasonable central position
  }
  if (val == '2')
  {
    Serial.println("Value 2 is received! Move Lower arm to 90deg");
    Larm1.write(90);      //Lower arm position
  }
  if (val == '3')
  {
    Serial.println("Value 3 is received! Move Upper arm to 90deg");
    Uarm1.write(90);      //Upper arm position
  }
  if (val == '4')
  {
    Serial.println("Value 4 is received! Move head to 90deg");
    head1.write(90);      //Head position
  }
  if (val == '5')
  {
    Serial.println("Value 5 is received! Gripper closing");
    gripper1.write(120);      //Close Gripper
  }
  if (val == '6')
  {
    Serial.println("Value 6 is received! Gripper opening");
    gripper1.write(80);      //Open Gripper
  }

  delay(1500);      //Wait for 1.5seconds till next loop
  
}//End of main loop
