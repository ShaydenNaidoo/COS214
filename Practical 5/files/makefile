# Object files for the main application
files = TestingMain.o Command.o DoorLock.o LegacyDevice.o LegacyThermostat.o Light.o LockDoor.o SetTemperature.o SmartDevice.o SmartThermostatAdapter.o Thermostat.o ToggleLightOff.o ToggleLightOn.o ToggleThermostatOff.o ToggleThermostatOn.o UnlockDoor.o TurnOffAllLights.o LockAllDoors.o MacroRoutine.o Alarm.o Sensor.o

# Object files for the unit tests
test_files = UnitTests.o Command.o DoorLock.o LegacyDevice.o LegacyThermostat.o Light.o LockDoor.o SetTemperature.o SmartDevice.o SmartThermostatAdapter.o Thermostat.o ToggleLightOff.o ToggleLightOn.o ToggleThermostatOff.o ToggleThermostatOn.o UnlockDoor.o TurnOffAllLights.o LockAllDoors.o MacroRoutine.o Alarm.o Sensor.o

# Compiler and flags
gpp = g++ -g -c

# Target for the main executable
Main: $(files)
	g++ -g $(files) -o Main -lgtest -lgtest_main -pthread

# Target for unit tests executable
UnitTests: $(test_files)
	g++ -g $(test_files) -o UnitTests -lgtest -lgtest_main -pthread

# Compile individual source files into object files
TestingMain.o: TestingMain.cpp
	$(gpp) TestingMain.cpp

UnitTests.o: UnitTests.cpp
	$(gpp) UnitTests.cpp

Command.o: Command.cpp
	$(gpp) Command.cpp

DoorLock.o: DoorLock.cpp
	$(gpp) DoorLock.cpp

LegacyDevice.o: LegacyDevice.cpp
	$(gpp) LegacyDevice.cpp

LegacyThermostat.o: LegacyThermostat.cpp
	$(gpp) LegacyThermostat.cpp

Light.o: Light.cpp
	$(gpp) Light.cpp

LockDoor.o: LockDoor.cpp
	$(gpp) LockDoor.cpp

SetTemperature.o: SetTemperature.cpp
	$(gpp) SetTemperature.cpp

SmartDevice.o: SmartDevice.cpp
	$(gpp) SmartDevice.cpp

SmartThermostatAdapter.o: SmartThermostatAdapter.cpp
	$(gpp) SmartThermostatAdapter.cpp

Thermostat.o: Thermostat.cpp
	$(gpp) Thermostat.cpp

ToggleLightOff.o: ToggleLightOff.cpp
	$(gpp) ToggleLightOff.cpp

ToggleLightOn.o: ToggleLightOn.cpp
	$(gpp) ToggleLightOn.cpp

ToggleThermostatOff.o: ToggleThermostatOff.cpp
	$(gpp) ToggleThermostatOff.cpp

ToggleThermostatOn.o: ToggleThermostatOn.cpp
	$(gpp) ToggleThermostatOn.cpp

UnlockDoor.o: UnlockDoor.cpp
	$(gpp) UnlockDoor.cpp


TurnOffAllLights.o: TurnOffAllLights.cpp
	$(gpp) TurnOffAllLights.cpp

LockAllDoors.o: LockAllDoors.cpp
	$(gpp) LockAllDoors.cpp

MacroRoutine.o: MacroRoutine.cpp
	$(gpp) MacroRoutine.cpp

Sensor.o: Sensor.cpp
	$(gpp) Sensor.cpp

Alarm.o: Alarm.cpp
	$(gpp) Alarm.cpp

# Other common targets
run: Main
	./Main

test: UnitTests
	./UnitTests

clean:
	rm -f *.o Main UnitTests

valgrind: Main
	valgrind --leak-check=full ./Main

debug: Main
	gdb Main
