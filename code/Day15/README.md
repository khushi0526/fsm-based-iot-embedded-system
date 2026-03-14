# Day 15 – Temperature and Humidity Monitoring using ESP32 and DHT22 with LCD

## 📌 Objective

To measure environmental temperature and humidity using a DHT22 sensor and display the readings on a 16x2 LCD using ESP32.

---

## 🛠 Hardware Used

ESP32
DHT22 Temperature and Humidity Sensor
16x2 LCD Display with I2C Module
Breadboard
Jumper Wires

---

## 🔌 Pin Configuration

### DHT22 Sensor

VCC → 3.3V
GND → GND
DATA → GPIO 4

### LCD (I2C)

VCC → 5V
GND → GND
SDA → GPIO 21
SCL → GPIO 22

---

## ⚙ Working Principle

The DHT22 sensor measures the surrounding temperature and humidity.
The ESP32 reads this data using the DHT library.

The measured values are then displayed on a 16x2 LCD screen through I2C communication.

The LCD shows:

* Temperature on the first row
* Humidity on the second row

The readings update every few seconds.

---

## 🧠 Concepts Learned

Sensor interfacing with ESP32
Temperature and humidity measurement
I2C communication
LCD interfacing
Serial monitoring for debugging

---

## ▶ Simulation
https://wokwi.com/projects/458493191838035969
