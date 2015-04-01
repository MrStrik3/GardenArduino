#include "SoilHumiditySensor.h"
#include <Arduino.h>

SoilHumiditySensor::SoilHumiditySensor(char *sensorName, unsigned short pinNo) : AnalogSensor(sensorName, pinNo, INPUT)
{
    //ctor
}

SoilHumiditySensor::~SoilHumiditySensor()
{
    //dtor
}

float SoilHumiditySensor::getSoilHumidity()
{
    short sensorValue = 1024 - this->getValue();
    float humidity_perc = (float)((sensorValue * 100) / 1024);
    return humidity_perc;
}
