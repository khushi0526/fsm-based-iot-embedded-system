# Day 30 – Smart Assistive System using ESP32 (Final Mini Project)

## 📌 Objective

To design a complete assistive system that detects obstacles, displays information, and allows user control using a menu interface.

---

## 🛠 Hardware Used

* ESP32
* HC-SR04 Ultrasonic Sensor
* OLED Display (SSD1306)
* Buzzer
* 2 Push Buttons
* Jumper Wires

---

## 🔌 Pin Configuration

### Ultrasonic

TRIG → GPIO 5
ECHO → GPIO 18

### OLED

SDA → GPIO 21
SCL → GPIO 22

### Buttons

Next → GPIO 4
Select → GPIO 15

### Buzzer

GPIO 2

---

## ⚙ Working Principle

System has **2 modes**:

### Mode 1: Distance Display

* Shows distance on OLED
* No alert

### Mode 2: Smart Alert

* Displays distance
* Gives buzzer alert based on distance

### Control:

* Next Button → Switch modes
* Select Button → Activate mode

---

## 🧠 Concepts Learned

* Multi-module integration
* Embedded UI + control
* Sensor + feedback system
* System-level design

---

## 🚀 Application

* Smart glasses for visually impaired
* Assistive navigation systems
* Wearable tech
* Embedded smart devices

---

## ▶ Simulation

https://wokwi.com/projects/459279803669523457

---

## 🎯 Outcome

A complete embedded system that integrates sensing, display, alert, and user control — simulating a real assistive product.
