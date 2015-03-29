#ifndef RELAY_H
#define RELAY_H

#include <DigitalSensor.h>


class Relay : public DigitalSensor
{
    public:
        Relay(char *sensorName, unsigned short pinNo);
        virtual ~Relay();
        void turnOn();
        void turnOff();
    protected:
    private:
        bool isOn;
};

#endif // RELAY_H
