#include <Arduino.h>
#include <String.h>
#include <SensorInfo.h>
#include <AnalogSensor.h>
#include <SoilHumiditySensor.h>

#define DEBUG
#define ANALOG      0
#define DIGITAL     1

//enum SENSORTYPE { ANALOG, DIGITAL };


//SensorInfo lightsensor1 = { "Light sensor 1", 0, ANALOG, INPUT };
//SensorInfo lightsensor2 = { "Light sensor 2", 1, ANALOG, INPUT };
//SensorInfo soilsensor1 = { "Soil hum sensor 1", 2, ANALOG, INPUT };

//AnalogSensor *light1 = new AnalogSensor( "Light sensor 1", 2, INPUT);
SoilHumiditySensor *soilHum1 = new SoilHumiditySensor("Soil humidity sensor 1", 2);


static char* ftoa( char* a, const float f, const int precision /* 0-8 */ )
    {
      static long p[] = { 0, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000 };
      static char buffer[16];
      char *ret = a;
      long heiltal = (long)f;
      itoa( heiltal, a, 10 );
      strcat( a, "." );
      long decimal = abs( (long)((f - heiltal) * p[precision]) );
      itoa( decimal, buffer, 10 );
      int l = strlen( buffer );
      for( int i = 0; i < (precision-l); ++i )
        strcat( a, "0" );
      strcat( a, buffer );
      return ret;
    }


void setup()
{
    #ifdef DEBUG
        Serial.begin(9600);
	#endif

    soilHum1->initSensor();
//	pinMode(lightsensor1.PinNo, lightsensor1.Mode);
//	pinMode(lightsensor2.PinNo, lightsensor2.Mode);
//	pinMode(soilsensor1.PinNo, soilsensor1.Mode);
    pinMode(8, DIGITAL);
 }

void loop()
{
	delay(1000);

	//float value1 = soilHum1->getValue();
//	int value2 = analogRead(lightsensor2.PinNo);
//	int value3 = analogRead(soilsensor1.PinNo);
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    #ifdef DEBUG
    Serial.println("Prout Prout!!!");
 //   char output[50];
 //   char *tmp;
 //   ftoa(tmp, value1, 3);
 //   sprintf(output, "%s %d --> %s", soilHum1->Name, soilHum1->PinNo, tmp);
 //   Serial.println(output);
//   sprintf(output, "%s %d %d %d --> %d", lightsensor2.Name, lightsensor2.PinNo, lightsensor2.Type, lightsensor2.Mode, value2);
//   Serial.println(output);
//   sprintf(output, "%s %d %d %d --> %d", soilsensor1.Name, soilsensor1.PinNo, soilsensor1.Type, soilsensor1.Mode, value3);
//   Serial.println(output);
   	#endif
}
