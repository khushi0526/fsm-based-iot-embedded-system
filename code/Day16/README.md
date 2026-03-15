# Day 17 – Motion Detection Alarm using PIR Sensor

## 📌 Objective

To detect human motion using a PIR sensor and activate an alarm system using an LED and buzzer with ESP32.

---

## 🛠 Hardware Used

ESP32
PIR Motion Sensor
LED
Buzzer
220Ω Resistor
Breadboard
Jumper Wires

---

## 🔌 Pin Configuration

### PIR Sensor

VCC → 5V
GND → GND
OUT → GPIO 4

### LED

GPIO 2 → LED → 220Ω Resistor → GND

### Buzzer

GPIO 5 → Buzzer → GND

---

## ⚙ Working Principle

The PIR (Passive Infrared) sensor detects motion by sensing changes in infrared radiation from moving objects such as humans or animals.

When motion is detected, the sensor output becomes HIGH.

The ESP32 reads this signal and activates:

* LED to indicate motion detection
* Buzzer to create an alarm sound

When no motion is detected, the output becomes LOW and both the LED and buzzer remain OFF.

---

## 🧠 Concepts Learned

Digital sensor interfacing
Motion detection using PIR sensor
Using conditional statements in embedded systems
Building a simple security alarm system

---

## ▶ Simulation
https://wokwi.com/projects/458582204381234177
