const int sensorPin = 34;   
const int ledPin = 2;
const int buzzerPin = 4;
int value;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  value = analogRead(sensorPin);
  Serial.print("Power Value: ");
  Serial.println(value);

  if (value < 1500) {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  else if (value < 3000) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  }
  else {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }

  delay(500);
}
