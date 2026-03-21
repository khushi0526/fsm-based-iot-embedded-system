# Alert System (ESP32 + Buzzer/Vibration)

## 📌 Objective

To enhance the system by adding an alert mechanism (buzzer or vibration motor) based on obstacle distance.

---

## 🛠 Hardware Used

* ESP32
* HC-SR04 Ultrasonic Sensor
* Buzzer (or Vibration Motor)
* Jumper Wires

---

## 🔌 Pin Configuration

### Ultrasonic Sensor

VCC → 5V
GND → GND
TRIG → GPIO 5
ECHO → GPIO 18

### Buzzer / Vibration Motor

Positive → GPIO 4
Negative → GND

---

## ⚙ Working Principle

1. Ultrasonic sensor measures distance continuously.
2. Based on distance:

   * **< 20 cm** → Continuous buzzer (DANGER)
   * **20–50 cm** → Intermittent beep (WARNING)
   * **> 50 cm** → No alert (SAFE)
3. This helps users understand surroundings without seeing.

---

## 🧠 Concepts Learned

* Assistive feedback systems
* Distance-based alert logic
* Human-centered design
* Real-time response system

---

## 🚀 Application

* Smart glasses for visually impaired
* Obstacle detection systems
* Navigation aids
* Wearable safety devices

---

## ▶ Simulation

https://wokwi.com/projects/459098773480531969

---

## 🎯 Outcome

A system that provides **audio/vibration feedback**, helping users detect obstacles without visual input.
