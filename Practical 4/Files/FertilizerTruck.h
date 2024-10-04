#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H

#include <iostream>

#include "TruckObserver.h"

class FertilizerTruck : public TruckObserver{
    private:

    public:
        void startEngine();

};

#endif