#include <Arduino.h>
#include <String.h>
#include <SensorInfo.h>
#include <AnalogSensor.h>

#define DEBUG
#define ANALOG      0
#define DIGITAL     1

//enum SENSORTYPE { ANALOG, DIGITAL };


SensorInfo lightsensor1 = { "Light sensor 1", 0, ANALOG, INPUT };
SensorInfo lightsensor2 = { "Light sensor 2", 1, ANALOG, INPUT SensorInfo soilsensor1 = { "Soil hum sensor 1", 2, ANALOG, INPUT };

AnalogSensor *light1 = new AnalogSensor( "Light sensor 1", 0, INPUT);

void setup()
{
    #ifdef DEBUG
        Serial.begin(9600);
	#endif

//	pinMode(lightsensor1.PinNo, lightsensor1.Mode);
//	pinMode(lightsensor2.PinNo, lightsensor2.Mode);
//	pinMode(soilsensor1.PinNo, soilsensor1.Mode);
 }

void loop()
{
	delay(5000);

	int value1 = light1->getValue();
//	int value2 = analogRead(lightsensor2.PinNo);
//	int value3 = analogRead(soilsensor1.PinNo);

    #ifdef DEBUG

    char output[50];

   sprintf(output, "%s %d %d %d --> %d", lightsensor1.Name, lightsensor1.PinNo, lightsensor1.Type, lightsensor1.Mode, value1);
   Serial.println(output);
//   sprintf(output, "%s %d %d %d --> %d", lightsensor2.Name, lightsensor2.PinNo, lightsensor2.Type, lightsensor2.Mode, value2);
//   Serial.println(output);
//   sprintf(output, "%s %d %d %d --> %d", soilsensor1.Name, soilsensor1.PinNo, soilsensor1.Type, soilsensor1.Mode, value3);
//   Serial.println(output);
   	#endif

}
