#include <Arduino.h>

// Archived from commit 1500206: feat: colorful light

constexpr int redPin = 27;
constexpr int greenPin = 26;
constexpr int bluePin = 25;

constexpr int freq = 5000;
constexpr int resolution = 8;

void setColor(int r, int g, int b) {
  ledcWrite(redPin, r);
  ledcWrite(greenPin, g);
  ledcWrite(bluePin, b);
}

void setup() {
  Serial.begin(9600);
  ledcAttach(redPin, freq, resolution);
  ledcAttach(greenPin, freq, resolution);
  ledcAttach(bluePin, freq, resolution);
}

void loop() {
  setColor(255, 0, 0);
  delay(1000);
  setColor(0, 255, 0);
  delay(1000);
  setColor(0, 0, 255);
  delay(1000);
  setColor(255, 255, 0);
  delay(1000);
  setColor(80, 0, 80);
  delay(1000);
  setColor(0, 255, 255);
  delay(1000);
}