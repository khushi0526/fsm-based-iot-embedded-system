# Day 24 – Smart Energy Meter System using ESP32

## 📌 Objective

To design a system that monitors electrical usage (simulated) and provides feedback when power consumption exceeds a limit.

---

## 🛠 Hardware Used

* ESP32
* Potentiometer (acts as power input simulation)
* LED
* Buzzer
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

### Potentiometer

VCC → 3.3V
GND → GND
Middle Pin → GPIO 34 (Analog Input)

### LED

Anode → GPIO 2
Cathode → GND

### Buzzer

Positive → GPIO 4
Negative → GND

---

## ⚙ Working Principle

1. Potentiometer simulates power usage (like current/voltage).
2. ESP32 reads analog value (0–4095).
3. Based on value:

   * **Low usage** → Normal
   * **Medium usage** → LED ON
   * **High usage** → LED + Buzzer alert
4. System warns user about excessive power usage.

---

## 🧠 Concepts Learned

* Analog input (ADC)
* Data scaling
* Threshold-based monitoring
* Energy management systems

---

## 🚀 Application

* Smart electricity meters
* Power monitoring systems
* Industrial load monitoring
* Home energy management

---

## ▶ Simulation

https://wokwi.com/projects/459099453233602561

---

## 🎯 Outcome

A system that monitors and alerts based on power usage, similar to real-world smart energy meters.
