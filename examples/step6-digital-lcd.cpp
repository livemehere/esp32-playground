#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16,2);

int count = 0;


void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.print("Hello, livemeher");
  lcd.setCursor(0,1);
  lcd.print("e! You are good!");
  delay(3000);

}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Count: ");
  lcd.print(count);
  count++;

  lcd.setCursor(0,1);
  lcd.print("livemehere");

  delay(1000);
}
