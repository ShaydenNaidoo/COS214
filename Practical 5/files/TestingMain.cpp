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
#include "MacroRoutine.h"
#include "TurnOffAllLights.h"
#include "LockAllDoors.h"
#include "Sensor.h"
#include "Alarm.h"

int main() {

    SmartDevice* thermostat = new Thermostat();
    Command* toggleThermostatOn = new ToggleThermostatOn(thermostat);
    Command* toggleThermostatOff = new ToggleThermostatOff(thermostat);
    Command* setTemperature = new SetTemperature(thermostat, 25);

    std::cout << "=== Testing Smart Thermostat (Task 1) ===" << std::endl;
    toggleThermostatOn->performAction();  
    setTemperature->performAction();     
    toggleThermostatOff->performAction(); 

    // Light (Smart Device)
    Light* light = new Light();
    Command* toggleLightOn = new ToggleLightOn(light);
    Command* toggleLightOff = new ToggleLightOff(light);

    std::cout << "\n=== Testing Smart Light (Task 1) ===" << std::endl;
    toggleLightOn->performAction(); 
    toggleLightOff->performAction(); 

    // Door Lock (Smart Device)
    DoorLock* doorLock = new DoorLock();
    Command* lockDoor = new LockDoor(doorLock);
    Command* unlockDoor = new UnlockDoor(doorLock);

    std::cout << "\n=== Testing Smart Door Lock (Component 1) ===" << std::endl;
    lockDoor->performAction();   
    unlockDoor->performAction(); 


    LegacyThermostat* legacyThermostat = new LegacyThermostat();
    SmartDevice* smartThermostatAdapter = new SmartThermostatAdapter(legacyThermostat);

    Command* toggleSmartThermostatOn = new ToggleThermostatOn(smartThermostatAdapter);
    Command* toggleSmartThermostatOff = new ToggleThermostatOff(smartThermostatAdapter);
    Command* setSmartThermostatTemp = new SetTemperature(smartThermostatAdapter, 22);

    std::cout << "\n=== Testing Legacy Thermostat through Adapter (Component 2) ===" << std::endl;
    toggleSmartThermostatOn->performAction();   
    setSmartThermostatTemp->performAction();    
    toggleSmartThermostatOff->performAction();  

std::cout << "\n=== TestingMacroRoutines the Composite Command (Component 3) ===" << std::endl;
    Light* light1 = new Light();
    Light* light2 = new Light();
    std::vector<Light*> lights = { light1, light2 };

    DoorLock* door1 = new DoorLock();
    DoorLock* door2 = new DoorLock();
    std::vector<DoorLock*> doors = { door1, door2 };

    TurnOffAllLights* turnOffAllLights = new TurnOffAllLights();
    for (auto light : lights) {
        Command* turnOffCommand = new ToggleLightOff(light);
        turnOffAllLights->addProcedure(turnOffCommand);
    }

    LockAllDoors* lockAllDoors = new LockAllDoors();
    for (auto door : doors) {
        Command* lockCommand = new LockDoor(door);
        lockAllDoors->addProcedure(lockCommand);
    }


    MacroRoutine* goodNightRoutine = new MacroRoutine();
    goodNightRoutine->addProcedure(turnOffAllLights);
    goodNightRoutine->addProcedure(lockAllDoors);

    std::cout << "\n=== Testing Automation Routine (Goodnight) ===" << std::endl;
    goodNightRoutine->performAction(); 

   
    std::cout << "\n===  Sensor Observations and Notifications (Component 4) ===" << std::endl;

    Alarm* alarm = new Alarm();
    alarm->addDevice(light1);
    alarm->addDevice(door1);

    alarm->triggerAlarm(); 
    std::cout<<"Light 1 is now "<<light1->getStatus()<<std::endl;
    std::cout<<"Door 1 is now "<<door1->getStatus()<<std::endl;
  






    delete alarm;
    delete light1;
    delete light2;
    delete door1;
    delete door2;
    delete turnOffAllLights;
    delete lockAllDoors;
    delete goodNightRoutine;


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
