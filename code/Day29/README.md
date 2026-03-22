# Day 29 – ESP32 OLED Menu-Based Interface System

## 📌 Objective

To design a visual menu system using an OLED display where users can navigate options and control outputs.

---

## 🛠 Hardware Used

* ESP32
* OLED Display (SSD1306 – I2C)
* 2 Push Buttons (Next & Select)
* LED
* Buzzer
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

### OLED Display

VCC → 3.3V
GND → GND
SDA → GPIO 21
SCL → GPIO 22

### Buttons

Next → GPIO 4
Select → GPIO 5

### LED

GPIO 2 → LED → GND

### Buzzer

GPIO 18 → Buzzer → GND

---

## ⚙ Working Principle

1. OLED displays menu options:

   * LED Control
   * Buzzer Control
   * Both ON

2. User actions:

   * **Next Button** → moves selection
   * **Select Button** → activates option

3. Selected option is highlighted on display.

---

## 🧠 Concepts Learned

* OLED interfacing (I2C)
* UI design in embedded systems
* Menu navigation logic
* Visual feedback systems

---

## 🚀 Application

* Smart device interfaces
* Embedded dashboards
* Wearable device UI (your smart glass 👀)
* Control panels

---

## ▶ Simulation

https://wokwi.com/projects/459218993883541505

---

## 🎯 Outcome

A complete **visual menu system** similar to real electronic devices with user navigation and control.
