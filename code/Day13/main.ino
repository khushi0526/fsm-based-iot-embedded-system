#include <DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT22
#define LEDPIN 2

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);

  pinMode(LEDPIN, OUTPUT);

  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  if (temperature > 30) {
    digitalWrite(LEDPIN, HIGH);
    Serial.println("Temperature High - LED ON");
  }
  else {
    digitalWrite(LEDPIN, LOW);
    Serial.println("Temperature Normal - LED OFF");
  }

  Serial.println("---------------------");

  delay(2000);
}
