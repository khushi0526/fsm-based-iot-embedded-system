# Day 11 – Ultrasonic Parking Sensor with Buzzer (ESP32)

## 📌 Objective

To measure the distance of an object using an ultrasonic sensor and activate a buzzer warning when the object comes too close.

---

## 🛠 Hardware Used

* ESP32
* Ultrasonic Sensor (HC-SR04)
* Buzzer
* Breadboard
* Jumper Wires

---

## 🔌 Pin Configuration

* VCC → 5V
* GND → GND
* TRIG → GPIO 5
* ECHO → GPIO 18
* Buzzer → GPIO 2

---

## ⚙ Working Principle

* The ultrasonic sensor measures distance using sound waves.
* The ESP32 sends a short pulse to the **TRIG** pin.
* The sensor emits an ultrasonic wave.
* When the wave hits an object, it reflects back to the sensor.
* The **ECHO** pin stays HIGH for the duration of the sound wave travel time.
* The ESP32 calculates the distance using the time taken for the echo to return.

If the measured distance is **less than 20 cm**, the buzzer turns **ON** to warn that an object is close.
If the distance is greater than the threshold, the buzzer remains **OFF**.

---

## 🧠 Concepts Learned

* Ultrasonic distance sensing
* Time-of-flight measurement
* Using the `pulseIn()` function
* Conditional logic using `if` statements
* Buzzer control for alert systems

---

## ▶ Simulation
https://wokwi.com/projects/458211975040825345
