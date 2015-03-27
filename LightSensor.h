#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H

#include <AnalogSensor.h>


class LightSensor : public AnalogSensor
{
    public:
        /** Default constructor */
        LightSensor(char *sensorName, unsigned short pinNo);
        /** Default destructor */
        virtual ~LightSensor();
    protected:
    private:
};

#endif // LIGHTSENSOR_H
