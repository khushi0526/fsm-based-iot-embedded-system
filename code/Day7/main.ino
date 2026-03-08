const int potPin = 34;
const int ledPin = 2;

int potValue;
int brightness;

void setup() {
  ledcAttach(ledPin, 5000, 8);
}

void loop() {

  potValue = analogRead(potPin);
  brightness = map(potValue, 0, 4095, 0, 255);

  ledcWrite(ledPin, brightness);

  delay(10);
}
