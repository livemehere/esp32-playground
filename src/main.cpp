#include <Arduino.h>

constexpr int redPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);
  Serial.println("LED ON");
  delay(1000);
  digitalWrite(redPin, LOW);
  Serial.println("LED OFF");
  delay(1000);
}
