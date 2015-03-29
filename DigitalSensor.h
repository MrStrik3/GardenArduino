#ifndef DIGITALSENSOR_H
#define DIGITALSENSOR_H

#include <SensorInfo.h>

class DigitalSensor : public SensorInfo
{
    public:
        /** Default constructor */
        DigitalSensor(char *sensorName, unsigned short pinNo, unsigned short mode);
        /** Default destructor */
        virtual ~DigitalSensor();

        void initSensor();
        unsigned int getValue();
        void setValue(unsigned short value);
    protected:
    private:
};

#endif // DIGITALSENSOR_H
