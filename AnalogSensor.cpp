#include "AnalogSensor.h"
#include <Arduino.h>

AnalogSensor::AnalogSensor(char *sensorName, unsigned short pinNo, unsigned short mode)
{
    Name = sensorName;
    Mode = mode;
    PinNo = pinNo;
}

AnalogSensor::~AnalogSensor()
{
    //dtor
}

unsigned int AnalogSensor::getValue() {
    int value = analogRead(PinNo);
    return value;
}

void AnalogSensor::initSensor() {
    pinMode(PinNo, Mode);
}
