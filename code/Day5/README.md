# Day 5 – LDR Light Sensor with ESP32

## 📌 Objective

To read light intensity using an LDR sensor and control an LED based on the light level.

---

## 🛠 Hardware Used

* ESP32
* LDR (Light Dependent Resistor) module
* LED
* 220Ω Resistor
* Jumper Wires

---

## 🔌 Pin Configuration

* LDR Analog Pin → GPIO 34 (INPUT)
* LED → GPIO 2 (OUTPUT)
* VCC → 3.3V
* GND → GND

---

## ⚙ Working Principle

* An LDR changes its resistance depending on the light intensity.
* When the light level changes, the voltage output from the LDR module changes.
* The ESP32 reads this value using an **analog input pin**.
* If the light level is below a certain threshold (dark environment), the LED turns **ON**.
* If the light level is high (bright environment), the LED turns **OFF**.

---

## 🧠 Concepts Learned

* Analog input reading using `analogRead()`
* Interfacing sensors with ESP32
* Light intensity measurement
* Conditional logic using `if` statements

---

## ▶ Simulation
(https://wokwi.com/projects/457855016753684481)
