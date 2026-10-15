#include "DHT.h"

#define DHTPIN D2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  float suhu = dht.readTemperature();
  float hum = dht.readHumidity();

  Serial.print("Suhu: ");
  Serial.print(suhu);
  Serial.print(" C  ");

  Serial.print("Kelembapan: ");
  Serial.print(hum);
  Serial.println(" %");

  delay(2000);
}