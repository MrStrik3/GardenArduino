#include "DigitalSensor.h"
#include <Arduino.h>

DigitalSensor::DigitalSensor(char *sensorName, unsigned short pinNo, unsigned short mode)
{
    //ctor
    Name = sensorName;
    Mode = mode;
    PinNo = pinNo;
}

DigitalSensor::~DigitalSensor()
{
    //dtor
}

unsigned int DigitalSensor::getValue() {
    int value = digitalRead(PinNo);
    return value;
}
