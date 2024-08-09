
#include "PrototypeRegistry.h"
#include "Soldiers.h"
void PrototypeRegistry::registerSoldierPrototype(const string& cloneGroup, Soldiers* soldier) {
    cloneRegistry[cloneGroup] = soldier;
}

void PrototypeRegistry::deregisterSoldierPrototype(const string& cloneGroup) {
       auto it = cloneRegistry.find(cloneGroup);
    if (it != cloneRegistry.end()) {
        std::cout << "Soldier prototype " << cloneGroup << " has been removed" << std::endl;
        delete it->second;
        cloneRegistry.erase(it);
    }else {
        std::cout << "Soldier prototype " << cloneGroup << " does not exist" << std::endl;
    }
}
Soldiers* PrototypeRegistry::cloneSoldier(const string& cloneGroup) {
    auto it = cloneRegistry.find(cloneGroup);
    if(it != cloneRegistry.end()){
        return it->second->clonis();
    }
    else{
        cout << "Soldier prototype " << cloneGroup << " does not exist" << endl;
        return nullptr;
    }
}

PrototypeRegistry::~PrototypeRegistry() {
    for(auto& entry : cloneRegistry){
        delete entry.second;
    }
}
void PrototypeRegistry::listSoldierPrototypes() {
    for(auto it = cloneRegistry.begin(); it != cloneRegistry.end(); it++){
        cout << it->first << endl;
    }
}