#include <iostream>
#include "SmartDevice.h"
#include "Thermostat.h"
#include "SmartThermostatAdapter.h"
#include "ToggleThermostatOn.h"
#include "ToggleThermostatOff.h"
#include "SetTemperature.h"
#include "Command.h"
#include "DoorLock.h"
#include "UnlockDoor.h"
#include <gtest/gtest.h>
#include "Light.h"
#include "ToggleLightOn.h"
#include "ToggleLightOff.h"
#include "LockDoor.h"
#include "LegacyThermostat.h"
#include "UnlockDoor.h"
#include "SmartThermostatAdapter.h"
int main() {
    // Task 1: Testing Command Pattern

    // Thermostat (Smart Device)
    SmartDevice* thermostat = new Thermostat();
    Command* toggleThermostatOn = new ToggleThermostatOn(thermostat);
    Command* toggleThermostatOff = new ToggleThermostatOff(thermostat);
    Command* setTemperature = new SetTemperature(thermostat, 25);

    std::cout << "=== Testing Smart Thermostat (Task 1) ===" << std::endl;
    toggleThermostatOn->performAction();  // Turn on the thermostat
    setTemperature->performAction();      // Set temperature to 25
    toggleThermostatOff->performAction(); // Turn off the thermostat

    // Light (Smart Device)
    Light* light = new Light();
    Command* toggleLightOn = new ToggleLightOn(light);
    Command* toggleLightOff = new ToggleLightOff(light);

    std::cout << "\n=== Testing Smart Light (Task 1) ===" << std::endl;
    toggleLightOn->performAction();  // Turn on the light
    toggleLightOff->performAction(); // Turn off the light

    // Door Lock (Smart Device)
    DoorLock* doorLock = new DoorLock();
    Command* lockDoor = new LockDoor(doorLock);
    Command* unlockDoor = new UnlockDoor(doorLock);

    std::cout << "\n=== Testing Smart Door Lock (Task 1) ===" << std::endl;
    lockDoor->performAction();   // Lock the door
    unlockDoor->performAction(); // Unlock the door

    // Task 2: Testing Adapter Pattern
    // Using the adapter to control the legacy thermostat through smart commands
    LegacyThermostat* legacyThermostat = new LegacyThermostat();
    SmartDevice* smartThermostatAdapter = new SmartThermostatAdapter(legacyThermostat);

    Command* toggleSmartThermostatOn = new ToggleThermostatOn(smartThermostatAdapter);
    Command* toggleSmartThermostatOff = new ToggleThermostatOff(smartThermostatAdapter);
    Command* setSmartThermostatTemp = new SetTemperature(smartThermostatAdapter, 22);

    std::cout << "\n=== Testing Legacy Thermostat through Adapter (Task 2) ===" << std::endl;
    toggleSmartThermostatOn->performAction();   // Turn on the legacy thermostat through the adapter
    setSmartThermostatTemp->performAction();    // Set temperature to 22 through the adapter
    toggleSmartThermostatOff->performAction();  // Turn off the legacy thermostat through the adapter

    // Clean up
    delete thermostat;
    delete toggleThermostatOn;
    delete toggleThermostatOff;
    delete setTemperature;

    delete light;
    delete toggleLightOn;
    delete toggleLightOff;

    delete doorLock;
    delete lockDoor;
    delete unlockDoor;

    delete smartThermostatAdapter;
    delete toggleSmartThermostatOn;
    delete toggleSmartThermostatOff;
    delete setSmartThermostatTemp;

    return 0;
}
