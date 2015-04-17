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

void Clock::setTime(unsigned short year, unsigned short month, unsigned short day,
             unsigned short hour, unsigned short minute,unsigned short second) {
    tmElements_t newTime;
    newTime.Year = CalendarYrToTm(year);
    newTime.Month = month;
    newTime.Day = day;
    newTime.Hour = hour;
    newTime.Minute = minute;
    newTime.Second = second;

    char dateheure[50];
    sprintf(dateheure, "set --> %04d-%02d-%02d", newTime.Year, newTime.Month, newTime.Day);
    Serial.println(dateheure);

    RTC.write(newTime);
    ::setTime(makeTime(newTime));

}

void Clock::printTime() {
    tmElements_t tm;
    RTC.read(tm);

    Serial.println(now());

    char dateheure[50];
    sprintf(dateheure, "%d-%02d-%02d %02d:%02d:%02d", tmYearToCalendar(tm.Year), tm.Month, tm.Day, tm.Hour, tm.Minute, tm.Second);
    Serial.println(dateheure);
    //DBG_PRINTLN(dateheure);
}
