#include <Arduino.h>

constexpr int buzzerPin = 14;
constexpr int resolution = 8;

int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523}; // do, re, mi, fa, sol, la, si, do

void play(int freq, int dur){
  ledcWriteTone(buzzerPin, freq);
  delay(dur);
  ledcWriteTone(buzzerPin, 0);
}

void setup() {
  Serial.begin(9600);
  ledcAttach(buzzerPin, 2000, resolution);
}

void loop() {
  for(int i=0; i<8; i++){
    play(frequencies[i], 500);
    delay(100);
  }
  delay(1000);
}
