/*
  Stepper Motor Demonstration 4
  Stepper-Demo4.ino
  Demonstrates NEMA 17 Bipolar Stepper with A4988 Driver

  DroneBot Workshop 2018
  https://dronebotworkshop.com
*/

// Define Constants

// Connections to A4988
const int dirPin = 6;  // Direction   X=5 Y=6 Z=7
const int stepPin = 3; // Step        X=2 Y=3 Z=4

// Motor steps per rotation
const int STEPS_PER_REV = 236;

void setup() {

  // Setup the pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}
void loop() {

  // Set motor direction clockwise
  digitalWrite(dirPin, HIGH);

  // Spin motor one rotation slowly
  for (int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }

  // Pause for one second
  delay(100);

  // Set motor direction counterclockwise
  digitalWrite(dirPin, LOW);

  // Spin motor two rotations quickly
  for (int x = 0; x < (STEPS_PER_REV ); x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }

  // Pause for one second
  delay(100);
}
