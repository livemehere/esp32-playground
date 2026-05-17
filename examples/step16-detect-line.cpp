#include <Arduino.h>

constexpr int linePin = 14;
int lineState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(linePin, INPUT);
}

void loop() {
  lineState = digitalRead(linePin);
  if (lineState == HIGH) {
    Serial.println("Black");
  } else {
    Serial.println("White");
  }
  delay(100);
}
