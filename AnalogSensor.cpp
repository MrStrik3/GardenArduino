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

void AnalogSensor::initSensor() {
    pinMode(PinNo, Mode);
}

unsigned int AnalogSensor::getValue() {

    analogRead(PinNo);
    int value = analogRead(PinNo);
    return value;
}


