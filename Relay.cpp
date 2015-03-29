#include "Relay.h"
#include <Arduino.h>


Relay::Relay(char* sensorName, unsigned short pinNo) : DigitalSensor(sensorName, pinNo, OUTPUT)
{
    //ctor
    isOn = false;
}

Relay::~Relay()
{
    //dtor
}

void Relay::turnOn() {

}

void Relay::turnOff() {
    if(isOn == true) {

    }
}
