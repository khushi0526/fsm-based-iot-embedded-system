# Day 16 – Ultrasonic Distance Measurement

## 📌 Objective

To measure the distance of an object using an ultrasonic sensor with ESP32 and display the measured distance in the Serial Monitor.

---

## 🛠 Hardware Used

ESP32
HC-SR04 Ultrasonic Sensor
Breadboard
Jumper Wires

---

## 🔌 Pin Configuration

### Ultrasonic Sensor

VCC → 5V
GND → GND
TRIG → GPIO 5
ECHO → GPIO 18

---

## ⚙ Working Principle

The ultrasonic sensor measures distance by sending ultrasonic sound waves and receiving the reflected echo from an object.

1. The TRIG pin sends a short ultrasonic pulse.
2. The sound wave travels through the air and hits an object.
3. The wave reflects back to the sensor.
4. The ECHO pin measures the time taken for the echo to return.
5. The ESP32 calculates the distance using the speed of sound.

Distance Formula:

Distance = (Time × Speed of Sound) / 2

The calculated distance is printed in the Serial Monitor.

---

## 🧠 Concepts Learned

Ultrasonic sensor interfacing
Distance measurement using sound waves
Using pulseIn() function
Serial communication for monitoring sensor data

---

## ▶ Simulation
https://wokwi.com/projects/458582476375587841
