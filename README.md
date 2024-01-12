# Arduino Keypad and Shift Register Project

## Overview
This repository features an Arduino project that demonstrates the use of a numeric keypad. It displays the last three numbers pressed on 7-segment displays. This project uses three CD4511 7-segment decoders and a 74HC595 8-bit shift register to efficiently control the displays.

## Project Description
The aim of this project is to illustrate the interaction between a numeric keypad and an Arduino, displaying input on 7-segment displays. The innovative use of the CD4511 decoders and the 74HC595 shift register demonstrates how to effectively manage multiple displays with limited Arduino pins.

## Circuit Diagram
Below is the circuit diagram for this project:

![Taisir Hassan- Keypad Shift Registor Project](https://github.com/taisirhassan/Arduino-Keypad-Shift-Register/assets/85134103/12afc87b-d9b7-4a39-9efc-15de65d03e93)

## Components
- Arduino (Uno, Mega, etc.)
- Numeric Keypad
- 3 x 7-Segment Displays
- 3 x CD4511 7-Segment Decoders
- 74HC595 8-bit Shift Register
- Breadboard and Jumper Wires
- Resistors and other supporting components

## Code Structure
- `main.ino`: This is the primary Arduino sketch file. It contains the logic to read the keypad inputs and control the 7-segment displays using the CD4511 decoders and the 74HC595 shift register.

## Setup and Installation
### Hardware Setup
1. **Assemble the Circuit**: Follow the circuit diagram to connect the keypad, 7-segment displays, CD4511 decoders, and the 74HC595 shift register on the breadboard, and then to the Arduino.
2. **Secure Connections**: Ensure all connections are properly made to the Arduino as per the circuit diagram.

### Software Installation
1. **Arduino IDE**: Download and install the Arduino IDE, if not already installed.
2. **Load the Sketch**: Open `main.ino` in the Arduino IDE.
3. **Upload to Arduino**: With your Arduino connected to the computer, select the correct board and port in the IDE and upload the sketch.

## Testing the Project
Perform a test by pressing keys on the keypad. Each keypress should update the display on the 7-segment units, showing the last three numbers entered. Verify that the shift register and decoders are functioning as intended.

## License
This project is open-source and is available for modification and distribution under the MIT License.
