#include<Stepper.h>

//Number of steps per revolution
const int stepsPerRevolution = 2048;

// Wiring:
// Pin 8 to IN1 on the ULN2003 driver
// Pin 9 to IN2 on the ULN2003 driver
// Pin 10 to IN3 on the ULN2003 driver
// Pin 11 to IN4 on the ULN2003 driver

// Create stepper object called 'myStepper', note the pin order:
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

// the setup routine runs once when you press reset:
void setup() {                
 // Set the speed to 5 rpm:
  myStepper.setSpeed(2);
}

//Main run loop
void loop() {
  // Step one revolution in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution / 2);
  delay(1500);
  
  // Step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution / 2);
  delay(1500);
  
}//End of main loop
