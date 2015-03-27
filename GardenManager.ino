#include <Arduino.h>
#include <String.h>
#include <SensorInfo.h>
#include <AnalogSensor.h>
#include <SoilHumiditySensor.h>
#include <Utils.h>

#define DEBUG
#define ANALOG      0
#define DIGITAL     1

//enum SENSORTYPE { ANALOG, DIGITAL };


//SensorInfo lightsensor1 = { "Light sensor 1", 0, ANALOG, INPUT };
//SensorInfo lightsensor2 = { "Light sensor 2", 1, ANALOG, INPUT };
//SensorInfo soilsensor1 = { "Soil hum sensor 1", 2, ANALOG, INPUT };

//AnalogSensor *light1 = new AnalogSensor( "Light sensor 1", 2, INPUT);
SoilHumiditySensor *soilHum1 = new SoilHumiditySensor("Soil humidity sensor 1", 2);


void setup()
{
    #ifdef DEBUG
        Serial.begin(9600);
	#endif

    soilHum1->initSensor();
//	pinMode(lightsensor1.PinNo, lightsensor1.Mode);
//	pinMode(lightsensor2.PinNo, lightsensor2.Mode);
//	pinMode(soilsensor1.PinNo, soilsensor1.Mode);
 }

void loop()
{
	delay(5000);

	float value1 = soilHum1->getSoilHumidity();
//	int value2 = analogRead(lightsensor2.PinNo);
//	int value3 = analogRead(soilsensor1.PinNo);

    #ifdef DEBUG
    char output[50];
    char tmp[25];

    Utils::ftoa(tmp, value1, 3);
    sprintf(output, "%s %d --> %s", soilHum1->Name, soilHum1->PinNo, tmp);
    Serial.println(output);
//   sprintf(output, "%s %d %d %d --> %d", lightsensor2.Name, lightsensor2.PinNo, lightsensor2.Type, lightsensor2.Mode, value2);
//   Serial.println(output);
//   sprintf(output, "%s %d %d %d --> %d", soilsensor1.Name, soilsensor1.PinNo, soilsensor1.Type, soilsensor1.Mode, value3);
//   Serial.println(output);
   	#endif
}
