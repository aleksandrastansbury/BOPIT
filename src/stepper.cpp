#include "stepper.h"
#include <Arduino.h>

#define STEP_PIN 4 // stepper pin
#define DIR_PIN 5  // direction pin

void stepperInit()
{
    pinMode(STEP_PIN, OUTPUT); // set both pins as output
    pinMode(DIR_PIN, OUTPUT);
}

void stepperCW(int steps)
{
    digitalWrite(DIR_PIN, HIGH); // sets the direction the stepper spins in to clockwise

    for (int i = 0; i < steps; i++) // for each step, set the step pin high so the motor spins and then low to stop
    {
        digitalWrite(STEP_PIN, HIGH);
        delayMicroseconds(1000); // to make the code faster or slower, change the values here from 500 to 1000 or vice versa
        digitalWrite(STEP_PIN, LOW);
        delayMicroseconds(1000);
    }
}

void stepperCCW(int steps)
{
    digitalWrite(DIR_PIN, LOW); // sets the direction the stepper spins in to counter clockwise

    for (int i = 0; i < steps; i++)
    {
        digitalWrite(STEP_PIN, HIGH); // for each step, set the step pin high so the motor spins and then low to stop
        delayMicroseconds(1000);      // to make the code faster or slower, change the values here from 500 to 1000 or vice versa
        digitalWrite(STEP_PIN, LOW);
        delayMicroseconds(1000);
    }
}