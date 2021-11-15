#include<Servo.h>

//These will be final wires for connection on board
int base = 5;
int arm1 = 6;
int arm2 = 7;
int grip_1 = 8;
int grip_2 = 9;

//Define various servo motors (SG-9)
Servo m_base;
Servo m_arm1;
Servo m_arm2;
Servo m_grip_1;
Servo m_grip_2;

int val = 0;
int pos = 0;

//Main setup loop
void setup()
{
  m_base.attach(base);
  m_arm1.attach(arm1);
  m_arm2.attach(arm2);
  m_grip_1.attach(grip_1);
  m_grip_2.attach(grip_2);
}

void loop()
{
  if (Serial.available())
  {
    val = Serial.read();      //Here we will read value from C# Mono GUI app
  }
  //Below will proceed after value is read into 'val' variable
    if (val == '1')
    {
      for (pos = 50; pos >= 20; pos--)
      {
        m_base.write(pos);
        delay(100);
        m_arm1.write(pos);
        delay(100);
      } 
    } else if (val == '2')
     {
        for (pos = 50; pos >= 20; pos--)
        {
          m_arm2.write(pos);
          delay(100);
        }
     } else if (val == '3')
     {
        for (pos = 50; pos >= 20; pos--)
        {
          m_grip_1.write(pos);
          delay(100);
        }
    }//End of if reading the val from serial port
  
  delay(500);
}
