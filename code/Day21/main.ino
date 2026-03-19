#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
const int ledPin = 7;
const int buzzerPin = 8;
void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  dht.begin();
}

void loop() {

  float temp = dht.readTemperature();

  Serial.print("Temperature: ");
  Serial.println(temp);

  if (temp > 35) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(2000);
}
