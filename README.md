# Arduino Keypad and Shift Register Project

## Overview
This repository contains the Arduino code and circuit design for a project that demonstrates the use of a numeric keypad with Arduino. It displays the last three numbers pressed on 7-segment displays. The project utilizes three 7-segment decoders (CD4511) and a shift register to efficiently manage the display.

## Project Description
The main goal of this project is to showcase how a numeric keypad can interface with an Arduino to control 7-segment displays. Each time a key is pressed on the keypad, the last three entered numbers are shown on the displays. This is achieved using CD4511 7-segment decoders and a shift register for effective display management.

## Circuit Diagram
Below is the circuit diagram for this project:

![Taisir Hassan- Keypad Shift Registor Project](https://github.com/taisirhassan/Arduino-Keypad-Shift-Register/assets/85134103/12afc87b-d9b7-4a39-9efc-15de65d03e93)

## Components
- Arduino (Uno, Mega, etc.)
- Numeric Keypad
- 3 x 7-Segment Displays
- 3 x CD4511 7-Segment Decoders
- Shift Register
- Breadboard and Jumper Wires
- Resistors and other supporting components

## Code Structure
- `main.ino`: The main Arduino sketch file that contains the code to read inputs from the keypad and control the 7-segment displays using the shift register and CD4511 decoders.

## Setup and Installation
### Hardware Setup
1. **Assemble the Circuit**: Arrange all the components on the breadboard as per the provided circuit diagram.
2. **Connect to Arduino**: Make sure all connections to the Arduino board are secure, following the wiring specified in the circuit diagram.

### Software Installation
1. **Arduino IDE**: Ensure you have the latest version of the Arduino IDE installed.
2. **Load the Sketch**: Open the `main.ino` file in the Arduino IDE.
3. **Upload to Arduino**: Connect your Arduino to your computer, select the appropriate board and port in the Arduino IDE, and upload the sketch.

## Testing the Project
After uploading the code to your Arduino, test the functionality by pressing different keys on the numeric keypad. Observe if the 7-segment displays correctly show the last three numbers entered.

## License
This project is open-source and is available for modification and distribution under [specify your license, e.g., MIT License].
