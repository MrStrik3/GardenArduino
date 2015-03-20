#ifndef HUMISOILSENSOR_H
#define HUMISOILSENSOR_H

#include <AnalogSensor.h>


class SoilHumiditySensor : public AnalogSensor
{
    public:
        SoilHumiditySensor(char *sensorName, unsigned short pinNo);
        virtual ~SoilHumiditySensor();
        float getSoilHumidity();
    protected:
    private:
};

#endif // HUMISOILSENSOR_H
