#include <Arduino.h>

constexpr int thermistorPin = 35;
constexpr float refVolt = 3.3;
constexpr float refResister = 10'000;
constexpr float beta = 3950;
constexpr float nominalTemp = 25;
constexpr float nominalResister = 10'000;


void setup() {
  Serial.begin(9600);
  pinMode(thermistorPin, INPUT);

}

void loop() {
  int adcValue = analogRead(thermistorPin);
  float voltage = (adcValue * refVolt) / 4095.0;
  float resistance = (voltage * refResister) / (refVolt - voltage);

  float tempK = 1 / (((log(resistance / nominalResister)) / beta) + (1 / (nominalTemp + 273.15)));

  float tempC = tempK - 273.15;
  float tempF = 1.8 * tempC + 32.0;

  printf("TempC: %.2f C / TempF: %.2f F\n", tempC, tempF);

  delay(300);
}
