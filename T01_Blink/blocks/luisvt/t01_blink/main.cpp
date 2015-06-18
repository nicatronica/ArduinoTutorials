/**
 * It blinks an LED. In this case, LED in pin 13 with a time delay of 1 second
 *
 * @file main.cpp
 * @section LICENSE

    This code is under MIT License, http://opensource.org/licenses/MIT
 */
#ifndef ARDUINO
#define ARDUINO 106
#endif

#include "Arduino.h"
#include "fenix/blink/blink.h"

Blink my_blink;
Blink my_blink2;
void setup() {
  //pin = 13, interval = 1000 ms
  my_blink.setup(13, 300);
  my_blink2.setup(12, 500);
}
void loop() {
  my_blink.loop();
  my_blink2.loop();
}

