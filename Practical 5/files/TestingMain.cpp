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

int main() {
    SmartDevice* thermostat;
    thermostat = new Thermostat();
    Command* toggleThermostatOn = new ToggleThermostatOn(thermostat);
    Command* toggleThermostatOff = new ToggleThermostatOff(thermostat);
    Command* setTemperature = new SetTemperature(thermostat, 25);
    toggleThermostatOn->performAction();
    setTemperature->performAction();
    toggleThermostatOff->performAction();
    return 0;
}
