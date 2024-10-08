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
#include "TurnOffAllLights.h" 
#include "LockAllDoors.h"     
#include "MacroRoutine.h"     
#include "Command.h"
#include "Thermostat.h"
#include "SmartThermostatAdapter.h"
#include "ToggleThermostatOn.h"
#include "Sensor.h"
#include "Alarm.h"

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


TEST(SmartDeviceTests, ThermostatCommands) {
    SmartDevice* thermostat = new Thermostat();

    Command* toggleThermostatOn = new ToggleThermostatOn(thermostat);
    Command* toggleThermostatOff = new ToggleThermostatOff(thermostat);
    Command* setTemperature = new SetTemperature(thermostat, 25);

    // Test turning on the thermostat
    toggleThermostatOn->performAction();
    EXPECT_EQ(thermostat->getStatus(), "ON"); 
    

    setTemperature->performAction();
    Thermostat* concreteThermostat = dynamic_cast<Thermostat*>(thermostat);
    EXPECT_EQ(concreteThermostat->getTemperature(), 25);

 
    toggleThermostatOff->performAction();
    EXPECT_EQ(thermostat->getStatus(), "OFF");  

    delete thermostat;
    delete toggleThermostatOn;
    delete toggleThermostatOff;
    delete setTemperature;
}


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


TEST(SmartDeviceTests, DoorLockCommands) {
    DoorLock* doorLock = new DoorLock();
    Command* lockDoor = new LockDoor(doorLock);
    Command* unlockDoor = new UnlockDoor(doorLock);


    lockDoor->performAction();
    EXPECT_EQ(doorLock->getStatus(), "Locked");

  
    unlockDoor->performAction();
    EXPECT_EQ(doorLock->getStatus(), "Unlocked");

    delete doorLock;
    delete lockDoor;
    delete unlockDoor;
}
TEST_F(LegacyThermostatTests, TestLegacyThermostatAdapter) {
  
    testing::internal::CaptureStdout();

 
    toggleSmartThermostatOn->performAction();   
    setSmartThermostatTemp->performAction();   
    toggleSmartThermostatOff->performAction();  


    std::string output = testing::internal::GetCapturedStdout();

 
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
        

    EXPECT_EQ(output, expectedOutput);
}

TEST(LockAllDoorsTests, AddProcedure) {
    LockAllDoors lockAllDoors;
    MockCommand* command1 = new MockCommand();

 
    lockAllDoors.addProcedure(command1);
    

    lockAllDoors.performAction();

 
    EXPECT_TRUE(command1->isExecuted());

    delete command1; 
}

TEST(LockAllDoorsTests, RemoveProcedure) {
    LockAllDoors lockAllDoors;
    MockCommand* command1 = new MockCommand();
    MockCommand* command2 = new MockCommand();


    lockAllDoors.addProcedure(command1);
    lockAllDoors.addProcedure(command2);
    
 
    lockAllDoors.removeProcedure(command1);
    
 
    lockAllDoors.performAction();


    EXPECT_FALSE(command1->isExecuted());
    EXPECT_TRUE(command2->isExecuted()); 

    delete command1; 
    delete command2;
}

TEST(LockAllDoorsTests, RemoveNonExistentProcedure) {
    LockAllDoors lockAllDoors;
    MockCommand* command1 = new MockCommand();
    MockCommand* command2 = new MockCommand();


    lockAllDoors.addProcedure(command1);


    lockAllDoors.removeProcedure(command2); 


    lockAllDoors.performAction();


    EXPECT_TRUE(command1->isExecuted());

    delete command1; 
    delete command2; 
}
TEST(TurnOffAllLightsTests, AddProcedure) {
    TurnOffAllLights turnOffAllLights;
    MockCommand* command1 = new MockCommand();

 
    turnOffAllLights.addProcedure(command1);
    
  
    turnOffAllLights.performAction();

   
    EXPECT_TRUE(command1->isExecuted());

    delete command1;
}

TEST(TurnOffAllLightsTests, RemoveProcedure) {
    TurnOffAllLights turnOffAllLights;
    MockCommand* command1 = new MockCommand();
    MockCommand* command2 = new MockCommand();

  
    turnOffAllLights.addProcedure(command1);
    turnOffAllLights.addProcedure(command2);
    
   
    turnOffAllLights.removeProcedure(command1);
    
   
    turnOffAllLights.performAction();

  
    EXPECT_FALSE(command1->isExecuted());
    EXPECT_TRUE(command2->isExecuted()); 

    delete command1;
    delete command2; 
}

TEST(TurnOffAllLightsTests, RemoveNonExistentProcedure) {
    TurnOffAllLights turnOffAllLights;
    MockCommand* command1 = new MockCommand();
    MockCommand* command2 = new MockCommand();

    
    turnOffAllLights.addProcedure(command1);

   
    turnOffAllLights.removeProcedure(command2); 

    turnOffAllLights.performAction();
    
    EXPECT_TRUE(command1->isExecuted());

    delete command1; 
    delete command2; 
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
TEST(SmartDeviceTests, AlarmNotification) {
    // Set up devices
    Light* light1 = new Light();
    Light* light2 = new Light();
    DoorLock* door1 = new DoorLock();
    DoorLock* door2 = new DoorLock();

    // Create commands to control the lights and doors
    Command* turnOffLight1 = new ToggleLightOff(light1);
    Command* turnOffLight2 = new ToggleLightOff(light2);
    TurnOffAllLights* turnOffAllLights = new TurnOffAllLights();
    turnOffAllLights->addProcedure(turnOffLight1);
    turnOffAllLights->addProcedure(turnOffLight2);

    Command* lockDoor1 = new LockDoor(door1);
    Command* lockDoor2 = new LockDoor(door2);
    LockAllDoors* lockAllDoors = new LockAllDoors();
    lockAllDoors->addProcedure(lockDoor1);
    lockAllDoors->addProcedure(lockDoor2);

    // Create the Alarm system and add the macro commands
    Alarm* alarm = new Alarm();
    alarm->addDevice(door1); 
     alarm->addDevice(door2);  // Turn off all lights when the alarm triggers
    alarm->addDevice(light1);      // Lock all doors when the alarm triggers
 alarm->addDevice(light2);   
    // Trigger the alarm
    alarm->triggerAlarm();  // This should turn off all lights and lock all doors

    // Check if the lights were turned off
    EXPECT_EQ(light1->getStatus(), "OFF");
    EXPECT_EQ(light2->getStatus(), "OFF");

    // Check if the doors were locked
    EXPECT_EQ(door1->getStatus(), "Locked");
    EXPECT_EQ(door2->getStatus(), "Locked");

    // Clean up
    delete light1;
    delete light2;
    delete door1;
    delete door2;
    delete turnOffLight1;
    delete turnOffLight2;
    delete lockDoor1;
    delete lockDoor2;
    delete turnOffAllLights;
    delete lockAllDoors;
    delete alarm;
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
