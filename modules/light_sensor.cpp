//=====[Libraries]=============================================================

#include "mbed.h"
#include "light_sensor.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

DigitalInOut analogPin();
DigitalIn lightSensor();

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

float lightReadings = [];

//=====[Declaration and initialization of private global variables]============

float total = 0;

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

float sensorUpdate() {
    lightReadings.append(lightSensor.read());

    for (i = len(lightReadings); i > len(lightReadings) - 10; i--) {
        total += lightReadings[i]
    }

    return (total/10.0);
}

//=====[Implementations of private functions]==================================
