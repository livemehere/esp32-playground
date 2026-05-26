#include <Arduino.h>
#include <DHT.h>


#define DHTPIN 14
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);

  float humidity = dht.readHumidity();
  float temp = dht.readTemperature();

  if (isnan(humidity) || isnan(temp)) {
    Serial.println("Failed to read from DHT");
    return;
  }

  Serial.printf("Humidity: %.2f / Temp : %.2f C\n", humidity, temp);


}
