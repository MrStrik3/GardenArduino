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

void DigitalSensor::initSensor() {
    pinMode(PinNo, Mode);
}

unsigned int DigitalSensor::getValue() {
    digitalRead(PinNo);
    unsigned int value = digitalRead(PinNo);
    return value;
}

void DigitalSensor::setValue(unsigned short value) {
    digitalWrite(PinNo, value);
}
