#ifndef HUMISOILSENSOR_H
#define HUMISOILSENSOR_H

#include <AnalogSensor.h>


class SoilHumiditySensor : public AnalogSensor
{
    public:
        /** Default constructor */
        SoilHumiditySensor(char *sensorName, unsigned short pinNo);
        /** Default destructor */
        virtual ~SoilHumiditySensor();
        float getSoilHumidity();
    protected:
    private:
};

#endif // HUMISOILSENSOR_H
