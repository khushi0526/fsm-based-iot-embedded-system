# Day 7 – LED Brightness Control using Potentiometer (ESP32)

## 📌 Objective

To control the brightness of an LED using a potentiometer with ESP32.
The potentiometer acts as an analog input, and the ESP32 adjusts the LED brightness using PWM.

---

## 🛠 Hardware Used

* ESP32
* Potentiometer (10kΩ)
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

* Potentiometer Middle Pin → GPIO 34 (Analog Input)
* Potentiometer Side Pins → 3.3V and GND
* LED → GPIO 2 (PWM Output)
* LED GND → GND through 220Ω resistor

---

## ⚙ Working Principle

* The potentiometer produces a variable voltage depending on its rotation.
* The ESP32 reads this voltage using `analogRead()`.
* The analog value ranges from **0 to 4095**.
* This value is mapped to a PWM range **0 to 255**.
* The PWM signal then controls the LED brightness.

Turning the potentiometer increases or decreases the LED brightness.

---

## 🧠 Concepts Learned

* Analog input using `analogRead()`
* Interfacing a potentiometer with ESP32
* Mapping sensor values using `map()`
* PWM brightness control using `ledcWrite()`

---

## ▶ Simulation
(https://wokwi.com/projects/457892633456366593)
