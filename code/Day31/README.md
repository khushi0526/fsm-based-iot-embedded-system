# 🔋 Battery Monitoring & Safety System (Arduino)

## 📌 Objective

To design a system that monitors battery conditions and provides alerts for safety using sensors, display, and control components.

---

## 🛠 Components Used

* Arduino UNO
* Temperature Sensor (TMP36/LM35)
* Relay Module
* Buzzer
* LEDs (Green, Red)
* Potentiometer
* 16x2 LCD (I2C)
* 9V Battery

---

## ⚙ Working Principle

* The system monitors battery condition using sensor inputs.
* Temperature is continuously measured.
* Based on threshold:

  * Normal → Green LED ON
  * Warning → Red LED ON
  * Critical → Buzzer ON + Relay control
* LCD displays real-time status.

---

## Simulation Link
https://www.tinkercad.com/things/4ClGMcSlcHF-ev-battery-managment-system

---

## 🔌 Features

* Real-time monitoring
* Visual + audio alert system
* Automatic safety control using relay
* User feedback via LCD

---

## 🚀 Applications

* Battery Management Systems (BMS)
* EV safety monitoring
* Power backup systems
* Industrial battery protection

---

## 🧠 Concepts Used

* Analog sensor reading
* Threshold logic
* Embedded safety system
* Human-machine interface (LCD)

---

## 🎯 Outcome

A smart safety system that monitors battery conditions and prevents damage using alerts and automatic control.
