//=====[Libraries]=============================================================

#include "entryway_light.h"
#include "mbed.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

DigitalIn lightSensor(D8);

//=====[Declaration and initialization of private global variables]============

int nightLevel;
int dayLevel;

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void entryLight() {
  if (lightSensor.read() < nightLevel) {
    lightSensor = ON;
  } else if (lightSensor.read() > dayLevel) {
    lightSensor = OFF;
  }
}

//=====[Implementations of private functions]==================================
