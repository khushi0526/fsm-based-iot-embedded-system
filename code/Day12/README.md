# Day 12 – Temperature and Humidity Monitoring

## 📌 Objective

To measure environmental temperature and humidity using the DHT22 sensor with ESP32 and display the readings in the Serial Monitor.

## 🛠 Hardware Used

ESP32
DHT22 Temperature and Humidity Sensor
Breadboard
Jumper Wires

## 🔌 Pin Configuration

DHT22 VCC → 3.3V
DHT22 GND → GND
DHT22 DATA → GPIO 4

## ⚙ Working Principle

The DHT22 sensor measures both temperature and humidity from the surrounding environment.
The sensor sends digital data to the ESP32 through the DATA pin.
The ESP32 reads the sensor values using the DHT library.
The measured temperature and humidity values are printed in the Serial Monitor every few seconds.

## 🧠 Concepts Learned

Temperature sensing
Humidity sensing
Using external sensor libraries
Digital sensor communication
Serial monitoring for data output

## ▶ Simulation

https://wokwi.com/projects/458301227069385729
