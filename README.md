# ESP32 Sensor Data Logger

##  Overview
This project implements a basic sensor data logging system using ESP32.
Analog sensor values are read and displayed via serial communication.

##  Hardware Used
- ESP32 Development Board
- Analog Sensor (Potentiometer / LDR)
- Breadboard & Jumper Wires

## Software
- Arduino IDE
- Embedded C
- ESP32 ADC

##  System Flow
1. Initialize serial communication
2. Read ADC value from sensor
3. Convert raw value to voltage
4. Display results via serial

##  Output Format
Raw: 2048 | Voltage: 1.65V

##  Future Improvements
- SD card data logging (CSV)
- BLE data transmission
- FreeRTOS-based sampling
- Power optimization
