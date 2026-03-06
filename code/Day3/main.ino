const int ldrPin = 34;   // LDR connected to GPIO34 (ADC pin)
const int ledPin = 2;    // LED connected to GPIO2

int ldrValue = 0;        // Variable to store LDR value

void setup() {
  Serial.begin(115200);     // Start serial communication
  pinMode(ledPin, OUTPUT);  // Set LED as output
}

void loop() {

  ldrValue = analogRead(ldrPin);  // Read analog value from LDR

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);       // Print value to Serial Monitor

  if (ldrValue < 2000) {          // Dark condition
    digitalWrite(ledPin, HIGH);   // Turn LED ON
  }
  else {
    digitalWrite(ledPin, LOW);    // Turn LED OFF
  }

  delay(500);
}
