# Day 10 – Ultrasonic Distance Measurement (ESP32)

## 📌 Objective

To measure the distance of an object using an ultrasonic sensor with ESP32 and display the measured distance in the Serial Monitor.

---

## 🛠 Hardware Used

* ESP32
* Ultrasonic Sensor (HC-SR04)
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

* VCC → 5V
* GND → GND
* TRIG → GPIO 5
* ECHO → GPIO 18

---

## ⚙ Working Principle

* The ultrasonic sensor measures distance using sound waves.
* The ESP32 sends a short pulse to the **TRIG** pin.
* The sensor emits an ultrasonic sound wave.
* When the wave hits an object, it reflects back to the sensor.
* The **ECHO** pin remains HIGH for the duration of the sound wave’s travel time.
* The ESP32 calculates the distance based on the time taken for the echo to return.

Distance is calculated using the formula:

Distance = (Time × Speed of Sound) / 2

The division by 2 is used because the sound wave travels to the object and back.

---

## 🧠 Concepts Learned

* Ultrasonic distance sensing
* Time-of-flight measurement
* Using `pulseIn()` function
* Serial communication
* Distance calculation using physics principles

---

## ▶ Simulation
https://wokwi.com/projects/458130237019863041
