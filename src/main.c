#include "Arduino.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 7
#endif

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);

  delay(1000);
}