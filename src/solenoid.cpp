#include "solenoid.h"
#include <Arduino.h>

#define SOLENOID_PIN 6

void solenoidInit()
{
    pinMode(SOLENOID_PIN, OUTPUT);
}
void solenoid()
{
    digitalWrite(SOLENOID_PIN, HIGH);
    delay(400);
    digitalWrite(SOLENOID_PIN, LOW);
    delay(400);
}