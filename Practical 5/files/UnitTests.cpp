#include <gtest/gtest.h>
#include "Thermostat.h"
#include "DoorLock.h"
#include "SmartThermostatAdapter.h"
#include "ToggleThermostatOn.h"
#include "ToggleThermostatOff.h"
#include "SetTemperature.h"
#include "UnlockDoor.h"
#include "Command.h"
#include "SmartDevice.h"
#include <iostream>

TEST(ThermostatTest, TurnOn) {
    Thermostat t;
    t.turnOn();
    EXPECT_EQ(t.getStatus(), "On");
}

TEST(ThermostatTest, SetTemperature) {
    Thermostat t;
    t.setTemperature(22);
    EXPECT_EQ(t.getTemperature(), 22);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
