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
    short sensorValue = 1023 - this->getValue();

    float humidity_perc = 0.00f;
    if(sensorValue > 0) {
        humidity_perc = (float)sensorValue * (100.f / 1023.f);
    }

    return humidity_perc;
}
