/*
   Name: Taisir Hassan
   Teacher: Mr. Gunby TDR4M1
   Date: January, 22, 2021
   Project: Keypad Numbers Display
   Description: An example of use of the numeric keypad
   with arduino to show the last 3 numbers pressed in
   3 7-segment displays
   using 3 7-segment decoders (CD4511) and a shift register
*/

#include <Keypad.h>
// Include Keypad library
// Note, I had no idea how to incorporate keypad without using library. Sorry Mr.Gunby.

//Keypad declaration
// Global Variables
const byte rows = 4; //four rows
const byte cols = 4; //four columns
char keys[rows][cols] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[rows] = {11, 10, 9, 8}; //connect to the row pinouts of the keypad
byte colPins[cols] = {7, 6, 5, 4}; //connect to the column pinouts of the keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, rows, cols);
// Instantiates a Keypad object that uses pins 11, 10, 9, 8 as row pins, and 7, 6, 4, and 4 as column pins.


bool shft[] = {HIGH, HIGH, LOW}; //Data for shift register

void setup() {  // the setup function runs once when you press reset or power the board
  configurePins(); // sets up configure and initshift as void functions
  initShiftReg();
}

int i = 0;  //shift data counter

void loop() { // the loop function runs over and over again forever
  char key = keypad.getKey();    //check for key
  if (key != NO_KEY) {      //if key pressed
    digitalWrite(13, shft[i]);  //next data to shift
    digitalWrite(12, HIGH);   //clk high
    switch (key) { //binary data output
      case '0': // case represents different situations
        // digital pin 0 is off, pin 1 is off, pin 2 is off, pin 3 is off
        digitalWrite(0, LOW);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        break; // break represents exiting the for loop
      case '1':
        // digital pin 0 is on, pin 1 is off, pin 2 is off, pin 3 is off
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        break;
      case '2':
        // digital pin 0 is off, pin 1 is on, pin 2 is off, pin 3 is off
        digitalWrite(0, LOW);
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        break;
      case '3':
        // digital pin 0 is on, pin 1 is on, pin 2 is off, pin 3 is off
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        break;
      case '4':
        // digital pin 0 is off, pin 1 is off, pin 2 is on, pin 3 is off
        digitalWrite(0, LOW);
        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        break;
      case '5':
        // digital pin 0 is on, pin 1 is off, pin 2 is on, pin 3 is off
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        break;
      case '6':
        // digital pin 0 is off, pin 1 is on, pin 2 is on, pin 3 is off
        digitalWrite(0, LOW);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        break;
      case '7':
        // digital pin 0 is on, pin 1 is on, pin 2 is on, pin 3 is off
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        break;
      case '8':
        // digital pin 0 is off, pin 1 is off, pin 2 is off, pin 3 is on
        digitalWrite(0, LOW);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        break;
      case '9':
        // digital pin 0 is on, pin 1 is off, pin 2 is off, pin 3 is on
        digitalWrite(0, HIGH);
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        break;
      default:
        break;
    }
    digitalWrite(12, LOW); //clk low
    i++;  //increase count incrementally
    if (i == 3) {
      i = 0; //reset count
    }
  }
}

void configurePins() {
  //Configure pins
  pinMode(0, OUTPUT);  //Control bit 0 of decoder
  pinMode(1, OUTPUT);  //Control bit 1 of decoder
  pinMode(2, OUTPUT);  //Control bit 2 of decoder
  pinMode(3, OUTPUT);  //Control bit 3 of decoder
  pinMode(12, OUTPUT); //Clock of shift register
  pinMode(13, OUTPUT); //Data for shift register
  //Start all in zeros
  digitalWrite(0, LOW); // Pin 0 is off
  digitalWrite(1, LOW); // pin 1 is off
  digitalWrite(2, LOW); // pin 2 is off
  digitalWrite(3, LOW); // pin 3 is off
  digitalWrite(12, LOW); //clock is off
  digitalWrite(13, LOW); // data s off
}

void initShiftReg() {
  digitalWrite(13, HIGH); //data high
  delay(50);    //wait 50 ms
  digitalWrite(12, HIGH); //clk high
  delay(50);  //wait 50 ms
  digitalWrite(12, LOW);  //clk low
  //----
  digitalWrite(13, HIGH); //data high
  delay(50);  //wait 50 ms
  digitalWrite(12, HIGH); //clk high
  delay(50);  //wait 50 ms
  digitalWrite(12, LOW);  //clk low
  //---
  digitalWrite(13, LOW);  //data low
  delay(50);  //wait 50 ms
  digitalWrite(12, HIGH); //clk high
  delay(50);  //wait 50 ms
  digitalWrite(12, LOW);  //clk low
}