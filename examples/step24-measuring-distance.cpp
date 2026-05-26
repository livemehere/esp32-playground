#include <Arduino.h>

int trigPin = 26;
int echoPin = 25;

float readData();

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {

  float d = readData();
  printf("distance : %.2f cm\n", d);
  delay(200);
}

float readData() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long microsecond = pulseIn(echoPin,HIGH);
  float distance = microsecond / 29.00 / 2;
  return distance;
}