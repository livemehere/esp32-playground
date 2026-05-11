#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LED_PIN 14
#define NUM_LEDS 8

Adafruit_NeoPixel strip(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  Serial.begin(9600);
  strip.begin();
  strip.show();
}

void loop() {
  for(int i=0; i< NUM_LEDS; i++){
    strip.setPixelColor(i, 80,0,80);
    strip.show();
    delay(100);
  }

  for(int i=0; i< NUM_LEDS; i++){
    strip.setPixelColor(i, 0,0,0);
    strip.show();
    delay(100);
  }
}
