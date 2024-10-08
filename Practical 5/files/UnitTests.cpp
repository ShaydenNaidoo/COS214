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
#include "TurnOffAllLights.h" // Include TurnOffAllLights
#include "LockAllDoors.h"     // Include LockAllDoors
#include "MacroRoutine.h"      // Include MacroRoutine
#include "Command.h"
#include "Thermostat.h"
#include "SmartThermostatAdapter.h"
#include "ToggleThermostatOn.h"

// Test for Legacy Thermostat through Adapter
class LegacyThermostatTests : public ::testing::Test {
protected:
    SmartThermostatAdapter* smartThermostatAdapter;
    LegacyThermostat* legacyThermostat;
    Command* toggleSmartThermostatOn;
    Command* toggleSmartThermostatOff;
    Command* setSmartThermostatTemp;

    void SetUp() override {
        legacyThermostat = new LegacyThermostat();
        smartThermostatAdapter = new SmartThermostatAdapter(legacyThermostat);

        toggleSmartThermostatOn = new ToggleThermostatOn(smartThermostatAdapter);
        toggleSmartThermostatOff = new ToggleThermostatOff(smartThermostatAdapter);
        setSmartThermostatTemp = new SetTemperature(smartThermostatAdapter, 22);
    }

    void TearDown() override {
        delete toggleSmartThermostatOn;
        delete toggleSmartThermostatOff;
        delete setSmartThermostatTemp;
        delete smartThermostatAdapter;
        delete legacyThermostat;
    }
};
class GoodNightRoutineTests : public ::testing::Test {
protected:
    Light* light1;
    Light* light2;
    DoorLock* door1;
    DoorLock* door2;
    TurnOffAllLights* turnOffAllLights;
    LockAllDoors* lockAllDoors;
    MacroRoutine* goodNightRoutine;

    void SetUp() override {
        // Set up devices
        light1 = new Light();
        light2 = new Light();
        door1 = new DoorLock();
        door2 = new DoorLock();

        // Create commands for automation
        turnOffAllLights = new TurnOffAllLights();
        turnOffAllLights->addProcedure(new ToggleLightOff(light1));
        turnOffAllLights->addProcedure(new ToggleLightOff(light2));

        lockAllDoors = new LockAllDoors();
        lockAllDoors->addProcedure(new LockDoor(door1));
        lockAllDoors->addProcedure(new LockDoor(door2));

        // Create macro routine
        goodNightRoutine = new MacroRoutine();
        goodNightRoutine->addProcedure(turnOffAllLights);
        goodNightRoutine->addProcedure(lockAllDoors);
    }

    void TearDown() override {
        // Clean up
        delete light1;
        delete light2;
        delete door1;
        delete door2;
        delete turnOffAllLights;
        delete lockAllDoors;
        delete goodNightRoutine;
    }
};
class MockCommand : public Command {
public:
    MockCommand() : executed(false) {}
    
    void performAction() override {
        executed = true;
    }
    void addProcedure(Command* command) override {}
    void removeProcedure(Command* command) override {}

    bool isExecuted() const {
        return executed;
    }

    void reset() {
        executed = false;
    }

private:
    bool executed; 
};

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
TEST_F(LegacyThermostatTests, TestLegacyThermostatAdapter) {
    // Capture the standard output
    testing::internal::CaptureStdout();

    // Perform actions through the adapter
    toggleSmartThermostatOn->performAction();   // Turn on the legacy thermostat through the adapter
    setSmartThermostatTemp->performAction();    // Set temperature to 22 through the adapter
    toggleSmartThermostatOff->performAction();  // Turn off the legacy thermostat through the adapter

    // Get the captured output
    std::string output = testing::internal::GetCapturedStdout();

    // Define the expected output
  std::string expectedOutput = 
        "Thermostat is off. Turning it on first.\n"
        "Temperature has decreased to 24°C\n"
        "Temperature has decreased to 23°C\n"
        "Temperature has decreased to 22°C\n"
        "Temperature has decreased to 21°C\n"
        "Temperature has decreased to 20°C\n"
        "Temperature set to 20°C via adapter.\n"
        "Legacy Thermostat is now On\n"
        "Temperature is now 20°C\n"
        "Setting temperature to 22°C via adapter.\n"
        "Temperature has increased to 21°C\n"
        "Temperature has increased to 22°C\n"
        "Temperature set to 22°C via adapter.\n"
        "Temperature has decreased to 21°C\n"
        "Temperature has decreased to 20°C\n"
        "Temperature set to 20°C via adapter.\n"
        "Legacy Thermostat has been turned off. Current temperature is: 20\n";
        
    // Compare the actual output with the expected output
    EXPECT_EQ(output, expectedOutput);
}
// Test for MacroRoutine "Goodnight" routine
TEST(LockAllDoorsTests, AddProcedure) {
    LockAllDoors lockAllDoors;
    MockCommand* command1 = new MockCommand();

    // Add a command
    lockAllDoors.addProcedure(command1);
    
    // Execute commands
    lockAllDoors.performAction();

    // Check if the command was executed
    EXPECT_TRUE(command1->isExecuted());

    delete command1; // Clean up
}

TEST(LockAllDoorsTests, RemoveProcedure) {
    LockAllDoors lockAllDoors;
    MockCommand* command1 = new MockCommand();
    MockCommand* command2 = new MockCommand();

    // Add commands
    lockAllDoors.addProcedure(command1);
    lockAllDoors.addProcedure(command2);
    
    // Remove command1
    lockAllDoors.removeProcedure(command1);
    
    // Execute remaining commands
    lockAllDoors.performAction();

    // Check that command1 was not executed
    EXPECT_FALSE(command1->isExecuted());
    EXPECT_TRUE(command2->isExecuted()); // Ensure command2 was executed

    delete command1; // Clean up
    delete command2; // Clean up
}

TEST(LockAllDoorsTests, RemoveNonExistentProcedure) {
    LockAllDoors lockAllDoors;
    MockCommand* command1 = new MockCommand();
    MockCommand* command2 = new MockCommand();

    // Add a command
    lockAllDoors.addProcedure(command1);

    // Try to remove a command that doesn't exist
    lockAllDoors.removeProcedure(command2); // This should log an error

    // Execute remaining commands
    lockAllDoors.performAction();

    // Ensure command1 was executed
    EXPECT_TRUE(command1->isExecuted());

    delete command1; // Clean up
    delete command2; // Clean up
}
TEST(TurnOffAllLightsTests, AddProcedure) {
    TurnOffAllLights turnOffAllLights;
    MockCommand* command1 = new MockCommand();

    // Add a command
    turnOffAllLights.addProcedure(command1);
    
    // Execute commands
    turnOffAllLights.performAction();

    // Check if the command was executed
    EXPECT_TRUE(command1->isExecuted());

    delete command1; // Clean up
}

TEST(TurnOffAllLightsTests, RemoveProcedure) {
    TurnOffAllLights turnOffAllLights;
    MockCommand* command1 = new MockCommand();
    MockCommand* command2 = new MockCommand();

    // Add commands
    turnOffAllLights.addProcedure(command1);
    turnOffAllLights.addProcedure(command2);
    
    // Remove command1
    turnOffAllLights.removeProcedure(command1);
    
    // Execute remaining commands
    turnOffAllLights.performAction();

    // Check that command1 was not executed
    EXPECT_FALSE(command1->isExecuted());
    EXPECT_TRUE(command2->isExecuted()); // Ensure command2 was executed

    delete command1; // Clean up
    delete command2; // Clean up
}

TEST(TurnOffAllLightsTests, RemoveNonExistentProcedure) {
    TurnOffAllLights turnOffAllLights;
    MockCommand* command1 = new MockCommand();
    MockCommand* command2 = new MockCommand();

    // Add a command
    turnOffAllLights.addProcedure(command1);

    // Try to remove a command that doesn't exist
    turnOffAllLights.removeProcedure(command2); // This should log an error

    // Execute remaining commands
    turnOffAllLights.performAction();

    // Ensure command1 was executed
    EXPECT_TRUE(command1->isExecuted());

    delete command1; // Clean up
    delete command2; // Clean up
}



TEST_F(GoodNightRoutineTests, ExecuteGoodNightRoutine) {
    // Capture the standard output
    testing::internal::CaptureStdout();

    // Execute the good night routine
    goodNightRoutine->performAction();

    // Get the captured output
    std::string output = testing::internal::GetCapturedStdout();

    // Define the expected output
    std::string expectedOutput = 
        "Executing turn off all lights procedure...\n"
        "Light is now OFF\n"
        "Light is now OFF\n"
        "Executing lock all doors procedure...\n"
        "Door is now Locked\n"
        "Door is now Locked\n";  // Adjust this line if you have more doors

    // Compare the actual output with the expected output
    EXPECT_EQ(output, expectedOutput);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
