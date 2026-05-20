#include <Arduino.h>

constexpr int inPin = 35;

void setup() {
  Serial.begin(9600);

}

void loop() {
  const int analogValue = analogRead(inPin);
  Serial.printf("value : %d\n", analogValue);

  delay(100);
}
