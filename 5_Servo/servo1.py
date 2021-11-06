#Import relevant libraries
import RPi.GPIO as GPIO
import time

#Set GPTIO numbering mode
GPIO.setmode(GPIO.BOARD)

#Set pin 11 as an output pin and set servo1 as pin 11 as PWM
GPIO.setup(11, GPIO.OUT)
servo1 = GPIO.PWM(11, 50)       #50 means 50hz pulse here

servo1.start(0)
print("Waiting for 2 seconds")
time.sleep(2)

print("Rotating the servo 180 degrees")
duty = 2
while duty <= 12:
    servo1.ChangeDutyCycle(duty)
    time.sleep(1)
    duty = duty + 1

time.sleep(2)
print("Turning back to 90 degrees for 2 seconds")
servo1.ChangeDutyCycle(7)
time.sleep(2)

print("Turning back to 0 degrees")
servo1.ChangeDutyCycle(2)
time.sleep(0.5)
servo1.ChangeDutyCycle(0)

servo1.stop()
GPIO.cleanup()
print("End of program! Goodbye")