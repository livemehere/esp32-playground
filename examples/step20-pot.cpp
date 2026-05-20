#include <Arduino.h>

constexpr int potPin = 35;
constexpr int ledPin = 26;

const int freq = 5000;
const int res = 12; // PWM 12bits

void setup() {
  Serial.begin(9600);
  ledcAttach(ledPin, freq, res);

}

void loop() {
  const int potV = analogRead(potPin);
  ledcWrite(ledPin, potV);

  const uint32_t voltage_mV = analogReadMilliVolts(potPin);
  Serial.printf("value : %d\n", potV);
  Serial.printf("Volt : %.2f", voltage_mV/1000.0);

  delay(100);
}
