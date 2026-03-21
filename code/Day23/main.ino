#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // Initialize I2C for ESP32
  Wire.begin(21, 22);

  // Initialize OLED
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  // Clear screen
  display.clearDisplay();

  // Display text
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(20, 20);
  display.println("HELLO");

  display.display();
}

void loop() {
  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("ESP32");

  display.setTextSize(2);
  display.setCursor(0, 20);
  display.println("WORKING");

  display.display();

  delay(1000);
}



//Simple Code
#include <Wire.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup() {
  Wire.begin(21, 22);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(10, 20);
  display.println("HELLO");
  display.display();
}

void loop() {}
