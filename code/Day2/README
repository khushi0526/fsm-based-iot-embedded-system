# Day 2 – Button Toggle with Debounce

## 📌 Objective
To implement toggle logic using a push button and control an LED using ESP32.  
Each button press should toggle the LED state (ON ↔ OFF).

---

## 🛠 Hardware Used
- ESP32
- Push Button
- LED
- 220Ω Resistor

---

## 🔌 Pin Configuration
- Button → GPIO 4 (INPUT_PULLUP mode)
- LED → GPIO 2 (OUTPUT mode)

---

## ⚙ Working Principle
- The button uses the internal pull-up resistor.
- When not pressed → GPIO reads HIGH.
- When pressed → GPIO reads LOW.
- The program detects a HIGH → LOW transition (edge detection).
- On each valid press, the LED state toggles.
- A 200ms software debounce delay prevents multiple toggles due to mechanical bouncing.

---

## 🧠 Concepts Learned
- GPIO input and output
- Edge detection (previous vs current state)
- Toggle logic
- Software debouncing
- Using millis() for timing

---

## ▶ Simulation
(https://wokwi.com/projects/457588103927161857)
