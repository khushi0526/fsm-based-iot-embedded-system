# Day 21 – Smart Fire Alarm System using Temperature Sensor (Arduino UNO)

## 📌 Objective

To design a fire alert system that detects high temperature and triggers a buzzer and LED as an alarm.

---

## 🛠 Hardware Used

* Arduino UNO
* Temperature Sensor (DHT22)
* Buzzer
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

### Temperature Sensor (DHT22)

VCC → 5V
GND → GND
DATA → D2

### LED

Anode → D7 (via resistor)
Cathode → GND

### Buzzer

Positive → D8
Negative → GND

---

## ⚙ Working Principle

1. The temperature sensor continuously measures temperature.
2. If temperature exceeds a threshold (e.g., 35°C):
   * LED turns ON
   * Buzzer sounds
3. If temperature is normal:
   * LED OFF
   * Buzzer OFF

This acts as a **basic fire warning system**.

---

## 🧠 Concepts Learned

* Sensor data reading
* Threshold-based control
* Alarm system design
* Safety system implementation

---

## 🚀 Application

* Fire detection systems
* Industrial safety
* Home automation safety
* Temperature monitoring systems

---

## ▶ Simulation

https://wokwi.com/projects/458937295325842433

---

## 🎯 Outcome

A simple **fire alert system** that warns users when temperature rises beyond safe levels.
