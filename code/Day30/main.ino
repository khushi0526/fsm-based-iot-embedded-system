#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Pins
const int trigPin = 5;
const int echoPin = 18;
const int buzzerPin = 2;

const int nextBtn = 4;
const int selectBtn = 15;

int mode = 0;
bool active = false;

int lastNext = HIGH;
int lastSelect = HIGH;

long duration;
float distance;

void setup() {
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  pinMode(nextBtn, INPUT_PULLUP);
  pinMode(selectBtn, INPUT_PULLUP);

  Wire.begin(21, 22);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED FAILED");
    while (1);
  }

  display.clearDisplay();
  display.setTextColor(WHITE);

  Serial.println("System Started");
}

void loop() {

  // -------- BUTTONS --------
  int nextState = digitalRead(nextBtn);
  int selectState = digitalRead(selectBtn);

  // Change Mode
  if (nextState == LOW && lastNext == HIGH) {
    mode = (mode + 1) % 2;
    active = false;
    delay(200);
  }

  // Toggle Active
  if (selectState == LOW && lastSelect == HIGH) {
    active = !active;
    delay(200);
  }

  lastNext = nextState;
  lastSelect = selectState;

  // -------- ULTRASONIC --------
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    distance = 0;
  } else {
    distance = duration * 0.034 / 2;
  }

  Serial.print("Distance: ");
  Serial.println(distance);

  // -------- DISPLAY --------
  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println(mode == 0 ? "Mode: Display" : "Mode: Alert");

  display.setCursor(0, 15);
  display.print("Dist: ");
  display.print(distance);
  display.println(" cm");

  // -------- BUZZER LOGIC (FIXED) --------
  if (active && mode == 1) {
    if (distance > 0 && distance < 20) {
      tone(buzzerPin, 1000);   // 🔊 SOUND ON
    } else {
      noTone(buzzerPin);       // 🔇 SOUND OFF
    }
  } else {
    noTone(buzzerPin);
  }

  // Status
  display.setCursor(0, 50);
  display.println(active ? "ACTIVE" : "INACTIVE");

  display.display();

  delay(200);
}
