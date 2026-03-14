# Day 14 – Automatic Street Light using LDR

## 📌 Objective

To automatically control a street light using an LDR sensor and ESP32 based on the surrounding light intensity.

## 🛠 Hardware Used

ESP32
LDR Sensor Module
LED
220Ω Resistor
Breadboard
Jumper Wires

## 🔌 Pin Configuration

LDR AO → GPIO 34
LDR VCC → 3.3V
LDR GND → GND
LED → GPIO 2

## ⚙ Working Principle

The LDR sensor detects the light intensity of the environment.
When the surroundings become dark, the sensor output value decreases.
The ESP32 reads this value through an analog pin.

If the light level is low (dark condition), the LED turns ON.
If the light level is high (bright condition), the LED turns OFF.

## 🧠 Concepts Learned

Analog sensor reading
Light sensing using LDR
Conditional control in embedded systems
Real-world automation using ESP32

## ▶ Simulation
https://wokwi.com/projects/458493625324650497
