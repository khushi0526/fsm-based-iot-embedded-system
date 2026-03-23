# Day 9 – ESP32 WiFi Web Server (LED Control)

## 📌 Objective

To create a web server using ESP32 that allows users to control an LED through a web browser.

---

## 🛠 Hardware Used

* ESP32
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

LED Anode → GPIO 2
LED Cathode → GND

---

## ⚙ Working Principle

1. ESP32 connects to WiFi network.
2. It starts a web server on port 80.
3. User opens ESP32 IP address in browser.
4. Webpage shows:

   * LED ON button
   * LED OFF button
5. Clicking buttons sends requests to ESP32.
6. ESP32 reads request and controls LED.

---

## 🧠 Concepts Learned

* WiFi connectivity
* Web server creation
* HTTP request handling
* IoT basics

---

## 🚀 Application

* Smart home systems
* IoT device control
* Remote automation
* Web-based embedded systems

---

## ▶ Simulation

(Not supported fully in Wokwi for WiFi)
https://wokwi.com/projects/459281000280580097

---

## 🎯 Outcome

A system that allows controlling hardware (LED) using a web interface over WiFi.
