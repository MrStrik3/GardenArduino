#ifndef ANALOGSENSOR_H
#define ANALOGSENSOR_H

#include <SensorInfo.h>

class AnalogSensor : public SensorInfo
{
    public:
        AnalogSensor(char *sensorName, unsigned short pinNo, unsigned short mode);
        void initSensor();
        virtual ~AnalogSensor();
        unsigned int getValue();
    protected:
    private:
};
#endif // ANALOGSENSOR_H
