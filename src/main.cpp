#include <Arduino.h>
#include "stepper.h"
#include "solenoid.h"

void setup()
{
    // stepperInit();
    solenoidInit();
}

void loop()
{
    // stepperCCW(200);
    solenoid();
    delay(500);
}