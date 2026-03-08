# Day 6 – LED Brightness Control using PWM (ESP32)

## 📌 Objective

To control the brightness of an LED using **PWM (Pulse Width Modulation)** with ESP32 instead of simple ON/OFF control.

---

## 🛠 Hardware Used

* ESP32
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

* LED → GPIO 2 (PWM Output)
* LED GND → GND through 220Ω resistor

---

## ⚙ Working Principle

* PWM (Pulse Width Modulation) allows the ESP32 to control the brightness of an LED by rapidly switching the signal between HIGH and LOW.
* The **duty cycle** determines how long the signal stays HIGH during each cycle.
* A higher duty cycle results in brighter LED output, while a lower duty cycle results in dimmer light.
* In this project, different PWM values are used to gradually change the brightness of the LED.

---

## 🧠 Concepts Learned

* PWM (Pulse Width Modulation)
* Duty Cycle
* LED brightness control
* Using `ledcAttach()` for PWM configuration
* Using `ledcWrite()` to control brightness levels

---

## ▶ Simulation
(https://wokwi.com/projects/457891693116396545)
