/*
  Stepper Motor Demonstration 4
  Stepper-Demo4.ino
  Demonstrates NEMA 17 Bipolar Stepper with A4988 Driver

  DroneBot Workshop 2018
  https://dronebotworkshop.com
*/

// Define Constants

// Connections to A4988
const int dirPin = 5;  // Direction   X=5 Y=6 Z=7
const int stepPin = 2; // Step        X=2 Y=3 Z=4

int c=0;

// Motor steps per rotation
const int STEPS_PER_REV = 200;

void setup() {
  Serial.begin(9600);
  // Setup the pins as Outputs
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
}
void loop() {

  // Set motor direction clockwise
  digitalWrite(dirPin,HIGH);

  // Spin motor one rotation slowly
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(2000);
    c=c+1;
    Serial.println(c);


  // Pause for one second
  delay(1000);
}