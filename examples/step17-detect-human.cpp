#include <Arduino.h>

constexpr int pirPin = 14;
constexpr int ledPin = 26;

int pirState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  pirState = digitalRead(pirPin);
  Serial.println(pirState);
  delay(100);
  if (pirState == HIGH) {
    digitalWrite(ledPin,HIGH);
  } else {
    digitalWrite(ledPin,LOW);
  }
}
