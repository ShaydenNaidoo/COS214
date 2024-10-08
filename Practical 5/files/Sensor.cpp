#include "Sensor.h"
#include "SmartDevice.h"
#include <algorithm>
#include <iostream>

void Sensor::addDevice(SmartDevice* device) {
    devices.push_back(device);
}

void Sensor::removeDevice(SmartDevice* device) {
    auto it = std::find(devices.begin(), devices.end(), device);
    if (it != devices.end()) {
        devices.erase(it);
        std::cout << "***Warning*** Device has been removed from recieving notifications from the Sensor be careful of an intruder." << std::endl;
    } else {
        std::cerr << "Error: Device was not found." << std::endl;
    }
}

void Sensor::notifyDevices() {
    for (auto device : devices) {
        device->update();  
    }
}