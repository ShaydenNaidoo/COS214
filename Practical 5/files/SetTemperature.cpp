#include "SetTemperature.h"



  SetTemperature::SetTemperature(SmartDevice* device, int temp) : device(device), temperature(temp) {}

void SetTemperature::performAction() {
    Thermostat* thermostat = dynamic_cast<Thermostat*>(device);
    if (thermostat != nullptr) {
        thermostat->setTemperature(temperature);
    } else {
        SmartThermostatAdapter* adapter = dynamic_cast<SmartThermostatAdapter*>(device);
        if (adapter != nullptr) {
            std::cout << "Setting temperature to " << temperature << "°C" << " via adapter." << std::endl;
            adapter->setTemperature(temperature);
        }
    }
}

void SetTemperature::addProcedure(Command* command) {

}
void SetTemperature::removeProcedure(Command* command) {

}
