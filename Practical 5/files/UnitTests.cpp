#include <gtest/gtest.h>
#include "SmartDevice.h"
#include "Thermostat.h"
#include "ToggleThermostatOn.h"
#include "ToggleThermostatOff.h"
#include "SetTemperature.h"
#include "Light.h"
#include "ToggleLightOn.h"
#include "ToggleLightOff.h"
#include "DoorLock.h"
#include "LockDoor.h"
#include "UnlockDoor.h"
#include "Command.h"

// Test for Thermostat On/Off and Set Temperature
TEST(SmartDeviceTests, ThermostatCommands) {
    SmartDevice* thermostat = new Thermostat();

    Command* toggleThermostatOn = new ToggleThermostatOn(thermostat);
    Command* toggleThermostatOff = new ToggleThermostatOff(thermostat);
    Command* setTemperature = new SetTemperature(thermostat, 25);


    // Test turning on the thermostat
    toggleThermostatOn->performAction();
   EXPECT_EQ(thermostat->getStatus(), "ON");   // Check if the thermostat status is "ON"
    // Test setting the temperature to 25
    setTemperature->performAction();

  Thermostat* concreteThermostat = dynamic_cast<Thermostat*>(thermostat);
  EXPECT_EQ(concreteThermostat->getTemperature(), 25);

    // Test turning off the thermostat
    toggleThermostatOff->performAction();
    EXPECT_EQ(thermostat->getStatus(), "OFF");  // Check if the thermostat status is "OFF"



    delete thermostat;
    delete toggleThermostatOn;
    delete toggleThermostatOff;
    delete setTemperature;
}

// Test for Light On/Off Commands
TEST(SmartDeviceTests, LightCommands) {
    Light* light = new Light();

    Command* toggleLightOn = new ToggleLightOn(light);
    Command* toggleLightOff = new ToggleLightOff(light);

  
    toggleLightOn->performAction();
       EXPECT_EQ(light->getStatus(), "ON");

 
    toggleLightOff->performAction();
     EXPECT_EQ(light->getStatus(), "OFF");

    delete light;
    delete toggleLightOn;
    delete toggleLightOff;
}

// Test for DoorLock Lock/Unlock Commands
TEST(SmartDeviceTests, DoorLockCommands) {
    DoorLock* doorLock = new DoorLock();
    Command* lockDoor = new LockDoor(doorLock);
    Command* unlockDoor = new UnlockDoor(doorLock);

    // Test locking the door
    lockDoor->performAction();
     EXPECT_EQ(doorLock->getStatus(), "Locked");

    // Test unlocking the door
    unlockDoor->performAction();
    EXPECT_EQ(doorLock->getStatus(), "Unlocked");

    delete doorLock;
    delete lockDoor;
    delete unlockDoor;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
