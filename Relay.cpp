#include "Relay.h"
#include <Arduino.h>

Relay::Relay(char* sensorName, unsigned short pinNo) : DigitalSensor(sensorName, pinNo, OUTPUT)
{
    //ctor
    #ifdef DEBUG
    Serial.println("Relay::Constructor()");
    #endif // DEBUG
    currentStatus = Relay::OFF;
}

Relay::~Relay()
{
    //dtor
}

unsigned int Relay::getStatus() {
    return currentStatus;
}

void Relay::turnOn() {
    if(getStatus() == OFF) {
        #ifdef DEBUG
        Serial.println("Turning on the relay")
        #endif // DEBUG
        setValue(HIGH);
        currentStatus = ON;
    }
}

void Relay::turnOff() {
    if(getStatus() == ON) {
        #ifdef DEBUG
        Serial.println("Turning off the relay")
        #endif // DEBUG
        setValue(LOW);
        currentStatus = OFF;
    }
}
