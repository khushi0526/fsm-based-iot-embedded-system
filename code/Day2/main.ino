const int buttonPin = 4;
const int ledPin = 2;

int ledState = LOW;
int lastButtonState = HIGH;

unsigned long lastPressTime = 0;
unsigned long debounceDelay = 200;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);
}

void loop() {
  int currentButtonState = digitalRead(buttonPin);

  if (lastButtonState == HIGH && currentButtonState == LOW) {
    if (millis() - lastPressTime > debounceDelay) {
      ledState = !ledState;
      digitalWrite(ledPin, ledState);
      lastPressTime = millis();
    }
  }

  lastButtonState = currentButtonState;
}
