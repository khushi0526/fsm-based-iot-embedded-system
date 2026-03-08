const int ledPin = 2;

void setup() {
  ledcAttach(ledPin, 5000, 8);   // attach PWM to pin
}

void loop() {

  ledcWrite(ledPin, 0);    // LED OFF
  delay(1000);

  ledcWrite(ledPin, 64);   // Dim
  delay(1000);

  ledcWrite(ledPin, 128);  // Medium
  delay(1000);

  ledcWrite(ledPin, 255);  // Full brightness
  delay(1000);

}
