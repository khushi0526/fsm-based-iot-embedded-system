#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define tempPin A0
#define voltPin A1
#define greenLED 7
#define redLED 6
#define buzzer 8
#define relayPin 5
LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(relayPin, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("EV BMS System");
  delay(2000);
  lcd.clear();
}

void loop() {

  int tempVal = analogRead(tempPin);
  float voltage = tempVal * (5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100;
  int voltVal = analogRead(voltPin);
  float batteryVoltage = voltVal * (5.0 / 1023.0) * 3;
  lcd.setCursor(0,0);
  lcd.print("T:");
  lcd.print(temperature);
  lcd.print("C ");
  lcd.print("V:");
  lcd.print(batteryVoltage);
  lcd.setCursor(0,1);

  if (temperature > 50 || batteryVoltage > 12) {
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(buzzer, HIGH);
    digitalWrite(relayPin, LOW);
    lcd.print("STATUS:DANGER ");
  } 
  else {
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    digitalWrite(buzzer, LOW);
    digitalWrite(relayPin, HIGH);
    lcd.print("STATUS:SAFE   ");
  }

  delay(1000);
}
