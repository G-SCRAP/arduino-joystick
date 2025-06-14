// Author: Gavin Ogren
// 6/13/2025

//Configuring a Arduino Controller Joystick 

//How to connect jumper cables to a 5 pin joystick
//GND	-> GND
//5V  -> 5V
//VRx -> A0
//VRy -> A1
//SW  -> D2

const int xPin = A0;
const int yPin = A1;
const int buttonPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);  // Button is active LOW
}

void loop() {
  int xValue = analogRead(xPin);     // 0 to 1023
  int yValue = analogRead(yPin);
  int buttonState = digitalRead(buttonPin); // LOW when pressed

  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print(" | Y: ");
  Serial.print(yValue);
  Serial.print(" | Button: ");
  Serial.println(buttonState == LOW ? "Pressed" : "Released");

  delay(200);  // Small delay for readability
}
