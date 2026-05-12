#include <Arduino.h>

constexpr int motor1A = 13;
constexpr int motor2A = 14;

void setup() {
  Serial.begin(9600);
  pinMode(motor1A, OUTPUT);
  pinMode(motor2A, OUTPUT);
}

void loop() {
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor2A, LOW);
  delay(500);
}
