# Day 27 – Smart Mode Control System using ESP32 (State Machine)

## 📌 Objective

To design a system that switches between multiple operating modes using a button, implementing a basic state machine.

---

## 🛠 Hardware Used

* ESP32
* Push Button
* LED
* Buzzer
* 220Ω Resistor
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

### Button

GPIO 4 → Button → GND (INPUT_PULLUP)

### LED

GPIO 2 → LED → GND

### Buzzer

GPIO 5 → Buzzer → GND

---

## ⚙ Working Principle

The system has **3 modes**:

* **Mode 1 (Idle)**
  → LED OFF, Buzzer OFF

* **Mode 2 (Light Mode)**
  → LED ON

* **Mode 3 (Alert Mode)**
  → LED ON + Buzzer ON

### Operation:

* Each button press → changes mode
* Modes cycle like:
  Idle → Light → Alert → Idle

---

## 🧠 Concepts Learned

* State machine design
* Mode switching logic
* Button handling
* System behavior control

---

## 🚀 Application

* Smart home systems
* Industrial control panels
* Device mode selection
* Embedded UI systems

---

## ▶ Simulation

https://wokwi.com/projects/459111845391105025

---

## 🎯 Outcome

A system that can switch between multiple operational modes, demonstrating real-world embedded control logic.
