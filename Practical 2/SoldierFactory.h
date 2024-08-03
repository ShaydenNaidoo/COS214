#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory{
    private:
        Soldiers *soldiers;

    protected:
        virtual Soldiers* createUnit();
        virtual int calculateTotalHealthPerUnit();
        virtual int calculateTotalDammagePerUnit();
        virtual int calculateTotalDefencePerUnit();

};

#endif