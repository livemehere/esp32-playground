#include <Arduino.h>
#include <ESP32Servo.h>

Servo servo;
constexpr int pin = 25;

constexpr int minPulseWidth = 500; // 0.5ms
constexpr int maxPulseWidth = 2500; // 2.5ms

void setup() {
  Serial.begin(9600);
  servo.attach(pin, minPulseWidth, maxPulseWidth);
  servo.setPeriodHertz(50); // 20ms
}

void loop() {

  for (int angle = 0; angle <= 180; angle++) {
    int pulse = map(angle, 0, 180, minPulseWidth, maxPulseWidth);
    servo.writeMicroseconds(pulse);
    delay(15);
  }

  for (int angle = 180; angle >=0; angle--) {
    int pulse = map(angle, 0, 180, minPulseWidth, maxPulseWidth);
    servo.writeMicroseconds(pulse);
    delay(15);
  }

}
