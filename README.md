# Ultrasonic Radar System

## Overview
This project is a simple radar system built using Arduino Uno, HC-SR04 ultrasonic sensor, and a servo motor.  

The sensor rotates between 15° and 165° and measures the distance of objects at different angles.

---

## Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Breadboard
- Jumper Wires
- 5V Power Supply

---

## Working

1. The ultrasonic sensor sends a sound pulse.
2. The sound reflects from an object.
3. The echo time is measured.
4. Distance is calculated.
5. The servo rotates to scan different angles.

The output is shown in Serial Monitor as:

Angle,Distance

Example:

45,23  
46,22  
47,21  

Where:
- Angle → Servo position (in degrees)
- Distance → Object distance (in cm)

---

## Applications
- Obstacle detection
- Basic robotics
- Distance measurement
- Educational projects

---

## Learning Outcome
- Ultrasonic distance measurement
- Servo motor control
- Serial communication
- Basic embedded systems integration
