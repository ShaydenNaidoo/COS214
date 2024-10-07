#include "SetTemperature.h"



  SetTemperature::SetTemperature(SmartDevice* device, int temp) : device(device), temperature(temp) {}

void SetTemperature::performAction() {
    Thermostat* thermostat = dynamic_cast<Thermostat*>(device);
    if (thermostat != nullptr) {
        thermostat->setTemperature(temperature);
    } else {
        SmartThermostatAdapter* adapter = dynamic_cast<SmartThermostatAdapter*>(device);
        if (adapter != nullptr) {
            adapter->setTemperature(temperature);
        }
    }
}
void SetTemperature::addProcedure(Command* command) {
    // Do nothing
}
void SetTemperature::removeProcedure(Command* command) {
    // Do nothing
}
