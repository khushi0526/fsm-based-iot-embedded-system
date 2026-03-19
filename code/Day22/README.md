# Day 22 – ESP32 Password-Based Security System using Keypad

## 📌 Objective

To design a password-protected system using a keypad where access is granted only when the correct password is entered.

---

## 🛠 Hardware Used

* ESP32
* 4x4 Keypad
* LED (Access Indicator)
* Buzzer
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

### Keypad (Example)

R1 → GPIO 13
R2 → GPIO 12
R3 → GPIO 14
R4 → GPIO 27
C1 → GPIO 26
C2 → GPIO 25
C3 → GPIO 33
C4 → GPIO 32

### LED

Anode → GPIO 2
Cathode → GND

### Buzzer

Positive → GPIO 4
Negative → GND

---

## ⚙ Working Principle

1. User enters password using keypad.
2. System stores input sequence.
3. If password matches:

   * LED turns ON (Access Granted)
4. If incorrect:

   * Buzzer sounds (Access Denied)

---

## 🧠 Concepts Learned

* Keypad interfacing
* Password logic
* String handling
* Security system design

---

## 🚀 Application

* Door lock systems
* ATM security
* Smart lockers
* Access control systems

---

## ▶ Simulation

https://wokwi.com/projects/458940080237258753

---

## 🎯 Outcome

A secure system that allows access only with the correct password, simulating real-world authentication systems.
