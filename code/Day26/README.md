# Day 26 – Reaction Timer Game using ESP32

## 📌 Objective

To design a system that measures human reaction time using a button and displays results via Serial Monitor and LED.

---

## 🛠 Hardware Used

* ESP32
* Push Button
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

### Button

One side → GPIO 4
Other side → GND (using INPUT_PULLUP)

### LED

Anode → GPIO 2
Cathode → GND

---

## ⚙ Working Principle

1. System waits for a random time.
2. LED turns ON → signal to press button.
3. User presses button as fast as possible.
4. ESP32 calculates reaction time using `millis()`.
5. Reaction time is displayed in Serial Monitor.

---

## 🧠 Concepts Learned

* Timing using millis()
* Human interaction system
* Random delay generation
* Real-time performance measurement

---

## 🚀 Application

* Reflex testing systems
* Gaming systems
* Human-machine interaction
* Training tools

---

## ▶ Simulation

https://wokwi.com/projects/459101641711568897

---

## 🎯 Outcome

A system that measures human reaction time, demonstrating real-time input processing and timing logic.
