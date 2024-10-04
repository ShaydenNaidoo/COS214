#ifndef FARMUNIT_H
#define FARMUNIT_H

#include <iostream>

using namespace std;

class FarmUnit {
    private:
    
    public:
        virtual int getTotalCapacity() =0;
        virtual string getCropType() =0;
        virtual string getSoilStateName() =0;
        virtual void add(FarmUnit* farmUnit) =0;
        virtual void remove(FarmUnit* farmUnit) =0;
        virtual void printUnitDetails() =0;
        virtual void printFarmDetails() =0;

};

#endif // FARMUNIT_H