#include "AnalogSensor.h"
#include <Arduino.h>

/*
 * Constructor
 * Parameters :
 *   - sensorName : Name of the sensor
 *   - pinNo : Pin number where the sensor is connected
 *   - mode : Mode of the sensor : ANALOG or DIGITAK
 */
AnalogSensor::AnalogSensor(char *sensorName, unsigned short pinNo, unsigned short mode)
{
    Name = sensorName;
    Mode = mode;
    PinNo = pinNo;
}

/*
 * Destructor.
 * Parameters : None required
 */
AnalogSensor::~AnalogSensor()
{

}

/*
 * Initialize the analog sensor.
 * Parameters : None
 */
void AnalogSensor::initSensor() {
    pinMode(PinNo, Mode);
}

/*
 * Get the value of the current analog sensor. (0-1023)
 * Parameters : None
 */
unsigned int AnalogSensor::getValue() {

    // Make 2 analog reads to make sure the read value is good.
    int value = analogRead(PinNo);
    value = analogRead(PinNo);
    return value;
}
