# Day 20 – Smart Dustbin with Buzzer Alert System (Arduino UNO)

## 📌 Objective

To enhance the smart dustbin system by adding a **buzzer alert** that notifies when the dustbin is in use or detects nearby motion.

---

## 🛠 Hardware Used

* Arduino UNO
* HC-SR04 Ultrasonic Sensor
* SG90 Servo Motor
* Buzzer
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

### Ultrasonic Sensor

VCC → 5V
GND → GND
TRIG → D9
ECHO → D10

### Servo Motor

Red → 5V
Brown → GND
Orange → D6

### Buzzer

Positive (+) → D8
Negative (-) → GND

---

## ⚙ Working Principle

This system improves the smart dustbin by adding an **audio alert feature**.

1. The ultrasonic sensor detects an object within 20 cm.
2. When detected:

   * The servo motor opens the lid (90°).
   * The buzzer turns ON to indicate usage.
3. After 3 seconds:

   * The servo closes the lid (0°).
   * The buzzer turns OFF.

This provides **audio feedback**, making the system more interactive and useful.

---

## 🧠 Concepts Learned

* Interfacing buzzer with Arduino
* Combining multiple outputs (servo + buzzer)
* Event-based alert system
* Enhancing user interaction in embedded systems

---

## 🚀 Application

* Public smart dustbins with alert
* Assistive systems for visually impaired users
* Interactive automation systems
* Smart city infrastructure

---

## ▶ Simulation

https://wokwi.com/projects/458838611619070977

---

## 🎯 Outcome

A smarter dustbin system that provides both **automatic lid operation and audio alert**, improving usability and real-world functionality.
