const int ledPin = 2;
const int buttonPin = 4;
unsigned long startTime;
unsigned long reactionTime;
void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.println("Get Ready...");
}

void loop() {
  // Random wait before signal
  int waitTime = random(2000, 5000);
  delay(waitTime);
  Serial.println("GO!");
  digitalWrite(ledPin, HIGH);
  startTime = millis();

  // Wait for button press
  while (digitalRead(buttonPin) == HIGH);
  reactionTime = millis() - startTime;
  digitalWrite(ledPin, LOW);
  Serial.print("Reaction Time: ");
  Serial.print(reactionTime);
  Serial.println(" ms");

  delay(3000);
}
