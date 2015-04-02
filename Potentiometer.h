#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H

#include <AnalogSensor.h>

class Potentiometer : public AnalogSensor
{
    public:
        /** Default constructor */
        Potentiometer(char* sensorName, unsigned short pinNo);
        /** Default destructor */
        virtual ~Potentiometer();
        float getIntensity();
    protected:
    private:
};

#endif // POTENTIOMETER_H
