#ifndef SETTEMPERATURE_H
#define SETTEMPERATURE_H

#include "Thermostat.h"
#include "LegacyThermostat.h"

class SetTemperature : public Thermostat, private LegacyThermostat {
public:
    SetTemperature(*);
    virtual ~SetTemperature();
    //void setTemp(double temperature) override;
};

#endif // SETTEMPERATURE_H