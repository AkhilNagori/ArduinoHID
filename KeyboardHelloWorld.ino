/*********************************************************************************
 * KeyboardHelloWorld.ini
 * Written by Chris Taylor for SparkFun Electronics, 10/15/12
 * 
 * NOTE: This example will not work on a "normal" UNO. It requires that the 
 * arduino-keyboard firmware be installed on the ATMega8U2. Please see
 *   https://github.com/SFE-Chris/UNO-HIDKeyboard-Library
 *
 * Simple sketch to type "Hello World!" three times in three different ways
 *
 ********************************************************************************/
#include <HIDKeyboard.h>

HIDKeyboard keyboard; // Initialize HIDKeyboard object

void setup() {
  keyboard.begin(); // Start communication
  delay(3000); // Wait for device to be found as a keyboard
  
  keyboard.pressKey(CTRL, 't'); // Holds Shift and presses '1'
  keyboard.releaseKey();
  keyboard.println("https://www.youtube.com/watch?v=xvFZjo5PgG0");
   keyboard.pressKey('f');
  keyboard.releaseKey();
}

void loop() {
  
}
