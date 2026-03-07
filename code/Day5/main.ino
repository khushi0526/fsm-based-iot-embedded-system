const int ldrPin = 34;
const int ledPin = 2;

int ldrValue;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {

  ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < 2000) { 
    digitalWrite(ledPin, HIGH); 
  } 
  else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}
