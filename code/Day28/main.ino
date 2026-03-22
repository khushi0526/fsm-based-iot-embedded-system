const int nextBtn = 4;
const int selectBtn = 5;
const int ledPin = 2;
const int buzzerPin = 18;
int menu = 0;
int lastNextState = HIGH;
int lastSelectState = HIGH;

void setup() {
  Serial.begin(115200);
  pinMode(nextBtn, INPUT_PULLUP);
  pinMode(selectBtn, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.println("Menu System Started");
}

void loop() {
  int nextState = digitalRead(nextBtn);
  int selectState = digitalRead(selectBtn);

  // NEXT button → change menu
  if (nextState == LOW && lastNextState == HIGH) {
    menu++;
    if (menu > 2) menu = 0;
    Serial.print("Menu: ");
    Serial.println(menu);
    delay(200);
  }

  // SELECT button → activate
  if (selectState == LOW && lastSelectState == HIGH) {
    if (menu == 0) {
      digitalWrite(ledPin, HIGH);
      digitalWrite(buzzerPin, LOW);
      Serial.println("LED ON");
    }
    else if (menu == 1) {
      digitalWrite(ledPin, LOW);
      digitalWrite(buzzerPin, HIGH);
      Serial.println("Buzzer ON");
    }
    else if (menu == 2) {
      digitalWrite(ledPin, HIGH);
      digitalWrite(buzzerPin, HIGH);
      Serial.println("Both ON");
    }
    delay(200);
  }

  lastNextState = nextState;
  lastSelectState = selectState;
}
