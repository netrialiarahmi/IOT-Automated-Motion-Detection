# IOT-Automated-Motion-Detection
This project uses a PIR (Passive Infrared) motion sensor to detect human movement around the sensor area. When motion is detected, the LED connected to digital pin 13 will turn on for 3 seconds. Then, the LED will turn off if no motion is detected for 3 seconds.

## Hardware
The following components are used in this project:

* PIR motion sensor
* LED
* Arduino board
* Software

## Code
The code for this project is written in Arduino IDE. The code uses the digitalRead() function to read the state of the PIR sensor, and the digitalWrite() function to control the LED. The millis() function is used to keep track of time and turn off the LED after 3 seconds of no motion.

## Usage
Connect the PIR sensor and LED to the Arduino board according to the circuit diagram. Upload the code to the board using the Arduino IDE. The LED will turn on for 3 seconds whenever motion is detected by the PIR sensor.
