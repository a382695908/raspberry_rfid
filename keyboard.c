#include <Keyboard.h>

// use this option for OSX:
//char ctrlKey = KEY_LEFT_GUI;
// use this option for Windows and Linux:
  char ctrlKey = KEY_LEFT_CTRL;  

void setup() 
{
  // make pin 2 an input and turn on the 
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {

  // new document:
  if(digitalRead(2) == HIGH)
  {
    //delay(50);
    Keyboard.press(0x80);
    Keyboard.press('c');
    delay(20);
    Keyboard.releaseAll();
  }// wait for new window to open:
  delay(10);
}