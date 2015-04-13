#include <Arduino.h>
#include <String.h>
#include <SensorInfo.h>
#include <AnalogSensor.h>
#include <SoilHumiditySensor.h>
#include <Relay.h>
#include <Utils.h>
#include <Potentiometer.h>
#include <DebugMode.h>
#include <Clock.h>

#define DEBUG
#define SETTIME
#define ANALOG      0
#define DIGITAL     1

Potentiometer *pot1 = new Potentiometer("Potentiometer 1", 3);

void setup()
{
    #ifdef DEBUG
        Serial.begin(9600);
	#endif

    #ifdef SETTIME
    unsigned int second, minute, hour, year, month, day;
    char month_str[12];

    sscanf(__TIME__,"%d:%d:%d", &hour, &minute, &second);
    sscanf(__DATE__,"%s %d %d", month_str, &day, &year);

    month = Utils::getMonthNumber(month_str);
    delay(5000);
    char output[50];
    sprintf(output, "%0d-%s(%0d)-%0d %0d:%0d:%0d", year, month_str, month, day, hour, minute, second);
    Serial.println(output);

    Clock::setTime(year, month, day, hour, minute, second);

    #endif // SETTIME

 }

void loop()
{
	delay(2000);
    Serial.println("PATATEAT");
    Clock::printTime();

//    Utils::ftoa(tmp, value2, 3);
//    sprintf(output, "%s %d --> %s", pot1->Name, pot1->PinNo, tmp);
//    Serial.println(output);
}
