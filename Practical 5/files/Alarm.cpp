// Alarm.cpp
#include "Alarm.h"
#include <iostream>

void Alarm::triggerAlarm() {
    std::cout << "Alarm triggered! Notifying devices..." << std::endl;
    notifyDevices();  // Notify all registered devices when alarm is triggered
}