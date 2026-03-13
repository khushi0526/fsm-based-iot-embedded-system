# Day 13 – Automatic Temperature Control (ESP32)

## 📌 Objective

To monitor temperature using the DHT22 sensor and automatically turn ON an LED when the temperature exceeds a predefined threshold.

## 🛠 Hardware Used

ESP32
DHT22 Temperature and Humidity Sensor
LED
220Ω Resistor
Breadboard
Jumper Wires

## 🔌 Pin Configuration

DHT22 VCC → 3.3V
DHT22 GND → GND
DHT22 DATA → GPIO 4

LED → GPIO 2 (OUTPUT)
LED GND → GND through 220Ω resistor

## ⚙ Working Principle

The DHT22 sensor measures the environmental temperature and humidity.
The ESP32 continuously reads the temperature from the sensor.
If the temperature exceeds a predefined threshold (for example 30°C), the LED turns ON.
If the temperature falls below the threshold, the LED turns OFF.

This simulates an automatic temperature control system such as a smart cooling indicator.

## 🧠 Concepts Learned

Temperature sensing using DHT22
Conditional control using `if` statements
Automatic device control based on sensor data
Interfacing sensors with ESP32
Basic embedded system automation

## ▶ Simulation
https://wokwi.com/projects/458385189122456577
