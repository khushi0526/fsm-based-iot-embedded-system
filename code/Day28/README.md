# Day 28 – Menu-Based Control System using ESP32

## 📌 Objective

To design a menu-driven system where a user can navigate through options using buttons and control outputs accordingly.

---

## 🛠 Hardware Used

* ESP32
* 2 Push Buttons (Next & Select)
* LED
* Buzzer
* 220Ω Resistors
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

### Buttons

Next Button → GPIO 4 → GND
Select Button → GPIO 5 → GND

### LED

GPIO 2 → LED → GND

### Buzzer

GPIO 18 → Buzzer → GND

---

## ⚙ Working Principle

The system has a simple menu:

* **Option 1 → LED Control**
* **Option 2 → Buzzer Control**
* **Option 3 → Both ON**

### Operation:

1. Press **Next button** → switch menu
2. Press **Select button** → activate selected option

---

## 🧠 Concepts Learned

* Menu-driven systems
* Multi-button input handling
* State + selection logic
* Embedded UI design

---

## 🚀 Application

* ATM interfaces
* Device settings menu
* Smart home controllers
* Embedded dashboards

---

## ▶ Simulation
https://wokwi.com/projects/459217230325327873
---

## 🎯 Outcome

A system that allows users to navigate and control features using a **menu-based interface**, similar to real-world electronic devices.
