//
// Created by shnai on 2024/10/05.
//

#include "SmartThermostatAdapter.h"
    SmartThermostatAdapter::SmartThermostatAdapter(LegacyThermostat* legacyThermostat) : legacyThermostat(legacyThermostat) {}

  void SmartThermostatAdapter::setTemperature(int temp) {
        int currentTemp = legacyThermostat->getCurrentTemp();
        while (currentTemp != temp) {
            if (currentTemp < temp) {
                legacyThermostat->increaseTemperature();
            } else {
                legacyThermostat->decreaseTemperature();
            }
            currentTemp = legacyThermostat->getCurrentTemp();
        }
    }

    int SmartThermostatAdapter::getTemperature() {
        return legacyThermostat->getCurrentTemp();
    }

    std::string SmartThermostatAdapter::getStatus() {
        return "Legacy Thermostat is at " + std::to_string(legacyThermostat->getCurrentTemp()) + " degrees.";
    }

    std::string SmartThermostatAdapter::getDeviceType() {
        return "Legacy Thermostat";
    }
