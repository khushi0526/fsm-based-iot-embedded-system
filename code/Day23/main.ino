#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);
  Serial.println("System Starting...");

  // Initialize I2C (IMPORTANT for ESP32)
  Wire.begin(21, 22);

  // Initialize OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED NOT FOUND");
    while (true);
  }

  Serial.println("OLED Initialized");

  display.clearDisplay();
  display.setTextColor(WHITE);

  // Show startup message
  display.setTextSize(2);
  display.setCursor(10, 20);
  display.println("HELLO");
  display.display();

  delay(2000);
}

void loop() {
  Serial.println("Loop Running...");

  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("ESP32 System");

  display.setTextSize(2);
  display.setCursor(0, 20);
  display.println("Working");

  display.display();

  delay(1000);
}
