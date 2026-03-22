#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
const int nextBtn = 4;
const int selectBtn = 5;
const int ledPin = 2;
const int buzzerPin = 18;
int menu = 0;
int lastNext = HIGH;
int lastSelect = HIGH;

void setup() {
  Serial.begin(115200);
  pinMode(nextBtn, INPUT_PULLUP);
  pinMode(selectBtn, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
}

void loop() {
  int nextState = digitalRead(nextBtn);
  int selectState = digitalRead(selectBtn);
  // NEXT button
  if (nextState == LOW && lastNext == HIGH) {
    menu++;
    if (menu > 2) menu = 0;
    delay(200);
  }
  // SELECT button
  if (selectState == LOW && lastSelect == HIGH) {
    if (menu == 0) {
      digitalWrite(ledPin, HIGH);
      digitalWrite(buzzerPin, LOW);
    }
    else if (menu == 1) {
      digitalWrite(ledPin, LOW);
      digitalWrite(buzzerPin, HIGH);
    }
    else if (menu == 2) {
      digitalWrite(ledPin, HIGH);
      digitalWrite(buzzerPin, HIGH);
    }
    delay(200);
  }

  lastNext = nextState;
  lastSelect = selectState;

  // DISPLAY MENU
  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("MENU");

  display.setCursor(0, 15);
  if (menu == 0) display.print("> ");
  display.println("LED Control");

  display.setCursor(0, 30);
  if (menu == 1) display.print("> ");
  display.println("Buzzer Control");

  display.setCursor(0, 45);
  if (menu == 2) display.print("> ");
  display.println("Both ON");

  display.display();
}
