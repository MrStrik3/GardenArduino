#include "Clock.h"
#include <extlib/DS1307RTC.h>
#include <extlib/Time.h>
#include <stdio.h>
#include <Wire.h>
#include <DebugMode.h>
#include <Arduino.h>

Clock::Clock()
{
    //ctor
}

Clock::~Clock()
{
    //dtor
}

void Clock::setTime(unsigned int year, int int month, unsigned int day,
             unsigned int hour, unsigned int minute,unsigned int second) {
    tmElements_t newTime;
    newTime.Year = year;
    newTime.Month = month;
    newTime.Day = day;
    newTime.Hour = hour;
    newTime.Minute = minute;
    newTime.Second = second;

    char dateheure[50];
    sprintf(dateheure, "set --> %d-%02d-%02d", newTime.Year, newTime.Month, newTime.Day);
    Serial.println(dateheure);

    RTC.write(newTime);
}

void Clock::printTime() {
    tmElements_t tm;
    RTC.read(tm);

    char dateheure[50];
    sprintf(dateheure, "%d-%02d-%02d", tm.Year, tm.Month, tm.Day);
    Serial.println(dateheure);
    //DBG_PRINTLN(dateheure);
}
