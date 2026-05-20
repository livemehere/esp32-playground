#include <Arduino.h>

constexpr int xPin = 34;
constexpr int yPin = 35;
constexpr int boolPin = 33;

void setup() {
  Serial.begin(9600);
  pinMode(boolPin, INPUT);
}

void loop() {

  int x = analogRead(xPin);
  int y = analogRead(yPin);
  int z = digitalRead(boolPin);

  Serial.printf("X : %d / Y : %d / Z : %s\n", x, y, z ? "true" : "false");
  delay(100);
}
