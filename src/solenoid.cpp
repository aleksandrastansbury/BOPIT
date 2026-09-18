#include "solenoid.h"
#include <Arduino.h>

#define SOLENOID_PIN 6

void solenoidInit()
{
    pinMode(SOLENOID_PIN, OUTPUT);
}
void solenoid()
{
    for (int i = 0; i < 3; i++)
    {
        digitalWrite(SOLENOID_PIN, HIGH);
        delay(400);
        digitalWrite(SOLENOID_PIN, LOW);
        delay(400);
    }
}