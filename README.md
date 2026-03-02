# FSM-Based IoT Embedded System

## Day 1 – GPIO Input Output (ESP32)

### Objective
To understand basic GPIO input and output using a push button and LED.

### Hardware / Platform
- Microcontroller: ESP32
- Simulator: Wokwi

### Working
- The push button is connected to GPIO 4.
- Internal pull-up resistor is enabled using INPUT_PULLUP.
- When the button is pressed, the GPIO reads LOW.
- LED connected to GPIO 2 turns ON when button is pressed and OFF when released.

### Concepts Learned
- GPIO input and output
- Internal pull-up resistor
- Digital read and write logic
