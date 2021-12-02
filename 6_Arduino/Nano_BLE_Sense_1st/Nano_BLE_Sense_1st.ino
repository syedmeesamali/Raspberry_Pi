#include<Servo.h>
int servo1 = 4;
int servo2 = 5;
Servo rightone;
Servo leftone;

int val = 0;
int pos = 0;

// the setup routine runs once when you press reset:
void setup() {                
  rightone.attach(servo1);
  leftone.attach(servo2);
}

//Main run loop
void loop() {
  if (Serial.available())
  {
    val = Serial.read();    //Read the serial value sent from C# app
  }
  
  if (val == '1')
  {
    for (pos=50; pos<=150; pos++)
    {
      rightone.write(pos);
      delay(50);      
    }
    delay(1000);
    for (pos=150; pos>=150; pos--)
    {
      rightone.write(pos);
      delay(50);      
    }
  }//End of processing for val of 1

  if (val == '2')
  {
    for (pos=50; pos<=150; pos++)
    {
      leftone.write(pos);
      delay(50);      
    }
    delay(1000);
    for (pos=150; pos>=150; pos--)
    {
      leftone.write(pos);
      delay(50);      
    }
  }//End of processing for val of 2

  if (val == '3')
  {
    rightone.write(90);
    leftone.write(90);
  }//End of processing for val of 2

  delay(2000);
  
}//End of main loop
