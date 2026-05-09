#include <Arduino.h>

const int DS = 27;
const int STcp = 26;
const int SHcp = 25;

int dataArr[] = {
  0b00111111, // 0
  0b00000110, // 1
  0b01011011, // 2
  0b01001111, // 3
  0b01100110, // 4
  0b01101101, // 5
  0b01111101, // 6
  0b00000111, // 7
  0b01111111, // 8
  0b01101111, // 9
};

void setup() {
  Serial.begin(9600);
  pinMode(DS, OUTPUT);
  pinMode(STcp, OUTPUT);
  pinMode(SHcp, OUTPUT);
}

void loop() {
 for(int i = 0; i < 10; i++){
    digitalWrite(STcp, LOW);
    shiftOut(DS, SHcp, MSBFIRST, dataArr[i]);
    digitalWrite(STcp, HIGH);
    delay(1000);
    Serial.println(dataArr[i], BIN);
 }
}
