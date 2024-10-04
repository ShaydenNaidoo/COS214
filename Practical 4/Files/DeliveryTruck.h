#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H

#include <iostream>

#include "TruckObserver.h"

class DeliveryTruck : public TruckObserver{
    private:

    public:
        void startEngine();

};

#endif