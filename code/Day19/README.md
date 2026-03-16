# Day 19 – Smart Dustbin (Automatic Lid)

## 📌 Objective

To design a smart dustbin that automatically opens its lid when a person brings their hand near the sensor using ESP32 and an ultrasonic sensor.

---

## 🛠 Hardware Used

ESP32
HC-SR04 Ultrasonic Sensor
SG90 Servo Motor
Breadboard
Jumper Wires

---

## 🔌 Pin Configuration

### Ultrasonic Sensor

VCC → 5V
GND → GND
TRIG → GPIO 5
ECHO → GPIO 18

### Servo Motor

VCC → 5V
GND → GND
Signal → GPIO 4

---

## ⚙ Working Principle

The ultrasonic sensor continuously measures the distance of nearby objects.

1. The sensor sends ultrasonic waves.
2. If a hand comes close to the sensor (distance < 20 cm), the ESP32 detects it.
3. The ESP32 sends a signal to the servo motor.
4. The servo rotates to 90° to open the dustbin lid.
5. After a few seconds, the servo returns to 0° and closes the lid.

This simulates a real-world smart hygiene system used in public places and smart homes.

---

## 🧠 Concepts Learned

Ultrasonic distance sensing
Servo motor control
Automation using sensors
Smart home embedded applications

---

## ▶ Simulation

(Add your Wokwi simulation link here)
