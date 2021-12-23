#include<Servo.h>
int hand = 12;
Servo hand1;
int val = 0;

// the setup routine runs once when you press reset:
void setup() {                
  hand1.attach(hand);
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
    Serial.println("Value 1! Move hand to 90deg! Type 2 for 120deg");
    hand1.write(90);      //Most probably some reasonable central position
  }
  if (val == '2')
  {
    Serial.println("Value 2! Move hand to 90deg! Type 3 for 60deg");
    hand1.write(120);      //Lower arm position
  }
  if (val == '3')
  {
    Serial.println("Value 3! Move hand to 60deg! Type 1 for 90deg");
    hand1.write(60);      //Upper arm position
  }
  
  delay(1000);      //Wait for 1.5seconds till next loop
  
}//End of main loop
