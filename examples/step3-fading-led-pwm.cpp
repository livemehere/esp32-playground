#include <Arduino.h>

// Archived from commit daa910c: feat: fading led with PWM (Pulse Width Modulation)

constexpr int ledPin = 26;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  Serial.begin(9600);
  ledcAttach(ledPin, 5000, 8);
}

void loop() {
  ledcWrite(ledPin, brightness);
  brightness += fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount *= -1;
  }
  delay(50);
}