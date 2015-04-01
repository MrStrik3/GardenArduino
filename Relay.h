#ifndef RELAY_H
#define RELAY_H

#include <DigitalSensor.h>


class Relay : public DigitalSensor
{
    public:
        enum STATUS { OFF  = 0, ON = 1 };
        Relay(char *sensorName, unsigned short pinNo);
        virtual ~Relay();
        void turnOn();
        void turnOff();
        unsigned int getStatus();
    protected:
    private:
        STATUS currentStatus;
};

#endif // RELAY_H
