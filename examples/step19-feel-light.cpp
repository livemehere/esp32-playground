#include <Arduino.h>

int buttonState = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(35);
  Serial.printf("value : %d\n", analogValue);
  delay(100);
}
