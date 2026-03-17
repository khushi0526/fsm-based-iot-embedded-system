# Day 19 – Smart Dustbin using Ultrasonic Sensor and Servo Motor (Arduino UNO)

## 📌 Objective

To design an application-level project that automatically opens and closes a dustbin lid using an ultrasonic sensor and a servo motor when a user’s hand is detected nearby.

---

## 🛠 Hardware Used

* Arduino UNO
* HC-SR04 Ultrasonic Sensor
* SG90 Servo Motor
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

---

## ⚙ Working Principle

This project works as a **touchless smart dustbin system**.

1. The ultrasonic sensor continuously measures the distance.
2. When a hand/object comes within 20 cm:

   * The sensor detects the object.
3. The Arduino processes this input and sends a signal to the servo motor.
4. The servo motor rotates to 90° → opening the lid.
5. After 3 seconds, the servo returns to 0° → closing the lid.

This enables **hygienic and contactless waste disposal**.

---

## 🧠 Concepts Learned

* Ultrasonic sensor interfacing
* Distance measurement using sound waves
* Servo motor control using PWM
* Conditional logic (if statements)
* Real-time automation system design

---

## 🚀 Application

* Smart homes
* Public sanitation systems
* Hospitals (hygiene critical areas)
* IoT-based waste management systems

---

## ▶ Simulation

https://wokwi.com/projects/458746800187394049

---

## 🎯 Outcome

A fully functional **automatic dustbin system** that improves hygiene by eliminating the need for physical contact.
