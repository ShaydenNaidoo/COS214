//CONCRETE_PRODUCT
#ifndef PROTOTYPE_REGISTRY_H
#define PROTOTYPE_REGISTRY_H

#include <iostream>
#include "Soldiers.h"
#include <map>
#include <string>

using namespace std;
class PrototypeRegistry {
    private:
    map <string, Soldiers*> cloneRegistry;

    public:
    ~PrototypeRegistry();
    void registerSoldierPrototype(const string& cloneGroup, Soldiers* soldier);
    void deregisterSoldierPrototype(const string& cloneGroup);
    Soldiers* cloneSoldier(const string& cloneGroup);
    void listSoldierPrototypes();
};

#endif