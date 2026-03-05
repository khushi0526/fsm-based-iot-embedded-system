# Day 3 – LDR Light Detection using ESP32

## 📌 Objective

To read light intensity using an LDR sensor and process the analog value using the ESP32 ADC. The system can monitor light levels and control an LED based on brightness.

---

## 🛠 Hardware Used

* ESP32
* LDR Sensor Module
* LED
* Jumper Wires

---

## 🔌 Pin Configuration

* LDR Analog Output (AO) → GPIO 34 (ADC input)
* LED → GPIO 2 (OUTPUT)
* VCC → 3.3V
* GND → GND

---

## ⚙ Working Principle

* The LDR changes its resistance depending on the amount of light falling on it.
* When light intensity increases, resistance decreases.
* The ESP32 reads this change as an analog value through its ADC pin.
* Based on the analog value, the system can detect whether the environment is bright or dark.
* The LED can be controlled depending on the detected light level.

---

## 🧠 Concepts Learned

* Interfacing analog sensors with ESP32
* Understanding LDR working principle
* Using ADC (Analog to Digital Conversion)
* Reading analog sensor values
* Basic sensor-based control logic

---

## ▶ Simulation

((https://wokwi.com/projects/457624754551313409))
