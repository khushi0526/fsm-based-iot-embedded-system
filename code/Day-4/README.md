# Day 4 – Ultrasonic Distance Measurement using ESP32

## 📌 Objective
To measure the distance of an object using an ultrasonic sensor and display the value using ESP32.

---

## 🛠 Hardware Used
- ESP32
- Ultrasonic Sensor (HC-SR04)
- Jumper Wires

---

## 🔌 Pin Configuration
Trig → GPIO 4  
Echo → GPIO 18  
VCC → 3.3V  
GND → GND  

---

## ⚙ Working Principle
The ultrasonic sensor sends a sound wave using the Trig pin.  
The wave reflects from an object and returns to the sensor.  
The Echo pin measures the time taken for the sound wave to return.  
Using the speed of sound, the ESP32 calculates the distance.

---

## 🧠 Concepts Learned
- Ultrasonic sensor working
- Time-based distance calculation
- Using pulseIn()
- Serial monitoring for debugging

---

## ▶ Simulation
(https://wokwi.com/projects/457731261289317377)
