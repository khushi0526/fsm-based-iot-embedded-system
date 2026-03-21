const int buttonPin = 4;
const int ledPin = 2;
const int buzzerPin = 5;
int mode = 0;
int lastButtonState = HIGH;
void setup() {
  Serial.begin(115200);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  int buttonState = digitalRead(buttonPin);

  // Detect button press (edge detection)
  if (buttonState == LOW && lastButtonState == HIGH) {
    mode++;
    if (mode > 2) mode = 0;

    Serial.print("Mode: ");
    Serial.println(mode);

    delay(200); // debounce
  }

  lastButtonState = buttonState;

  // Mode behavior
  if (mode == 0) {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  else if (mode == 1) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  }
  else if (mode == 2) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }
}
