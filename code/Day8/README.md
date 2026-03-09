# Day 8 – Touch Sensor LED Control (ESP32)

## 📌 Objective

To control an LED using the built-in capacitive touch sensor of the ESP32.
When the touch pin is touched, the LED turns ON, and when released, the LED turns OFF.

---

## 🛠 Hardware Used

* ESP32
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

* Touch Pin → GPIO 4
* LED → GPIO 2 (OUTPUT)
* LED GND → GND through 220Ω resistor

---

## ✋ ESP32 Touch Pins

The ESP32 has built-in capacitive touch sensors on specific GPIO pins.

Available touch pins:

* GPIO 0 (T1)
* GPIO 2 (T2)
* GPIO 4 (T0)
* GPIO 12 (T5)
* GPIO 13 (T4)
* GPIO 14 (T6)
* GPIO 15 (T3)
* GPIO 27 (T7)
* GPIO 32 (T9)
* GPIO 33 (T8)

These pins can detect touch using the `touchRead()` function.

---

## ⚙ Working Principle

* The ESP32 has built-in capacitive touch sensors.
* When a finger touches the touch pin, the capacitance changes.
* The ESP32 reads this change using `touchRead()`.
* If the touch value falls below a threshold, the system detects a touch and turns the LED ON.
* When the finger is removed, the LED turns OFF.

---

## 🧠 Concepts Learned

* Capacitive touch sensing
* Using `touchRead()` in ESP32
* Threshold comparison
* Digital output control

---

## ▶ Simulation
(https://wokwi.com/projects/457987052481644545)
