#include <Arduino.h>

constexpr int motor1A = 13;
constexpr int motor2A = 14;

constexpr int freq = 500;
constexpr int resolution = 8;

void setup() {
  Serial.begin(9600);
  ledcAttach(motor1A, freq, resolution);
  ledcAttach(motor2A, freq, resolution);
}

void loop() {
  for (int i=0; i<255; i++) {
    ledcWrite(motor1A, i);
    ledcWrite(motor2A, 0);
    delay(50);
  }

  delay(1000);

  for (int i=255; i>0; i--)
  {
    ledcWrite(motor1A, i);
    ledcWrite(motor2A, 0);
    delay(50);
  }

  delay(1000);

}
