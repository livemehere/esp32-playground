#include <Arduino.h>

constexpr int avoidPin = 14;
int avoidState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(avoidPin, INPUT);
}

void loop() {
  avoidState = digitalRead(avoidPin);
  Serial.println(avoidState);

}
