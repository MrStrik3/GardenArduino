#include "LightSensor.h"
#include <Arduino.h>

LightSensor::LightSensor(char *sensorName, unsigned short pinNo) : AnalogSensor(sensorName, pinNo, INPUT)
{
    //ctor
}

LightSensor::~LightSensor()
{
    //dtor
}
