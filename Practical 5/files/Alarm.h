// Alarm.h
#ifndef ALARM_H
#define ALARM_H

#include "Sensor.h"

// Alarm class that inherits from Sensor
class Alarm : public Sensor {
public:
    void triggerAlarm();  // Method to trigger the alarm and notify devices
};

#endif // ALARM_H
