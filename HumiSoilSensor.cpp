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
    int sensorValue = this->getValue();

    float humidity_perc = sensorValue * 100 / 1024;

    return humidity_perc;
}
