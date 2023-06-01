/*********************************************************************************
 * KeyboardHelloWorld.ino
 * Written by Chris Taylor for SparkFun Electronics, 10/15/12

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
