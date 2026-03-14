const int ldrPin = 34;   // LDR connected to GPIO 34 (Analog)
const int ledPin = 2;    // LED connected to GPIO 2

int ldrValue = 0;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  ldrValue = analogRead(ldrPin);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if (ldrValue < 2000) {     // Dark condition
    digitalWrite(ledPin, HIGH);
    Serial.println("Dark - LED ON");
  }
  else {                     // Bright condition
    digitalWrite(ledPin, LOW);
    Serial.println("Bright - LED OFF");
  }

  Serial.println("----------------");
  delay(1000);
}
