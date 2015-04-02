#include "Potentiometer.h"
#include <AnalogSensor.h>
#include <Arduino.h>

Potentiometer::Potentiometer(char* sensorName, unsigned short pinNo ) : AnalogSensor(sensorName, pinNo, INPUT)
{
    //ctor
}

Potentiometer::~Potentiometer()
{
    //dtor
}


float Potentiometer::getIntensity()
{
    short sensorValue = 1023 - this->getValue();

    float intensity_perc = 0.00f;
    if(sensorValue > 0) {
        intensity_perc = (float)sensorValue * (100.f / 1023.f);
    }

    return intensity_perc;
}
