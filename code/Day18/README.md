# Day 18 – Smart Parking Assistant

## 📌 Objective

To design a smart parking assistance system using ESP32 and an ultrasonic sensor that alerts the driver when the vehicle gets too close to an obstacle.

---

## 🛠 Hardware Used

ESP32
HC-SR04 Ultrasonic Sensor
LED
Buzzer
220Ω Resistor
Breadboard
Jumper Wires

---

## 🔌 Pin Configuration

### Ultrasonic Sensor

VCC → 5V
GND → GND
TRIG → GPIO 5
ECHO → GPIO 18

### LED

GPIO 2 → LED → 220Ω Resistor → GND

### Buzzer

GPIO 4 → Buzzer → GND

---

## ⚙ Working Principle

The system measures the distance between the sensor and an obstacle using ultrasonic waves.

1. The ultrasonic sensor sends a sound pulse.
2. The sound reflects from an obstacle.
3. The ESP32 measures the return time of the echo.
4. Distance is calculated using the speed of sound.

The system then provides alerts based on distance:

* Distance > 40 cm → Safe zone (LED OFF)
* Distance between 20–40 cm → Warning zone (LED ON)
* Distance < 20 cm → Danger zone (LED + Buzzer ON)

This simulates a real-world vehicle parking sensor system.

---

## 🧠 Concepts Learned

Ultrasonic distance sensing
Embedded decision making using conditions
Real-world safety alert systems
Sensor-based automation

---

## ▶ Simulation
https://wokwi.com/projects/458582979766592513
