# ClimateControlProject-Unlox
A simple Arduino-based climate control system that uses a transistor to drive a cooling fan (motor). The system demonstrates how environmental conditions can be used to automate devices. Built and simulated using Tinkercad, it is ideal for beginners in embedded systems and electronics.



# Climate Control System using Arduino

## Overview
This project is a simple **Climate Control System** built using an Arduino Uno. It is designed to monitor environmental conditions and control a cooling device (motor/fan) automatically.

The system uses basic electronic components like a transistor and motor to simulate temperature-based climate control.

---

##  Components Used
- Arduino Uno
- DC Motor (Fan)
- NPN Transistor
- Resistor (1kΩ)
- 9V Battery
- Connecting Wires
- Breadboard (optional)

---

##  Working Principle
- The Arduino acts as the main controller.
- Based on input conditions (like temperature logic in code), it controls the transistor.
- The transistor acts as a switch to turn the motor (fan) ON or OFF.
- When the condition is met:
  - Transistor ON → Motor ON → Cooling starts
- When the condition is not met:
  - Transistor OFF → Motor OFF

---

##  Circuit Description
- The motor is connected through an NPN transistor.
- The transistor base is connected to an Arduino digital pin via a resistor.
- The motor is powered using a 9V battery.
- Arduino controls the switching of the transistor.

---

##  Features
- Simple and low-cost design
- Automatic control of cooling system
- Easy to simulate using Tinkercad
- Beginner-friendly Arduino project

---

##  Applications
- Smart home temperature control
- Automatic fan systems
- Basic HVAC simulation
- IoT-based climate systems (can be extended)

---

## Future Improvements
- Add temperature sensor (like LM35 or DHT11)
- Display temperature on LCD
- IoT integration (WiFi/Bluetooth)
- Automatic threshold adjustment.

