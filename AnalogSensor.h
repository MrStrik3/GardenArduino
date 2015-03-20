#include <SensorInfo.h>

class AnalogSensor : public SensorInfo
{
    public:
        AnalogSensor(char *sensorName, unsigned short pinNo, unsigned short mode);
        void initSensor();
        virtual ~AnalogSensor();
        virtual unsigned int getValue();
    protected:
    private:
};
