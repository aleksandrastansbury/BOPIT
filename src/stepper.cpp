#include "stepper.h"
#include <Arduino.h>

// Define these per your actual wiring
#define STEP_PIN 4
#define DIR_PIN 5

void stepperInit()
{
    pinMode(STEP_PIN, OUTPUT);
    pinMode(DIR_PIN, OUTPUT);
}

void stepperCW(int steps)
{
    digitalWrite(DIR_PIN, HIGH);

    for (int i = 0; i < steps; i++)
    {
        digitalWrite(STEP_PIN, HIGH);
        delayMicroseconds(1000);
        digitalWrite(STEP_PIN, LOW);
        delayMicroseconds(1000);
    }
}

void stepperCCW(int steps)
{
    digitalWrite(DIR_PIN, LOW);
    for (int i = 0; i < steps; i++)
    {
        digitalWrite(STEP_PIN, HIGH);
        delayMicroseconds(1000);
        digitalWrite(STEP_PIN, LOW);
        delayMicroseconds(1000);
    }
}