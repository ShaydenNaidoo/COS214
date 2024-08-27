#ifndef LEGION_H
#define LEGION_H
#include <vector>
#include "UnitComponent.h"

class Legion : public UnitComponent {
private:
    std::vector<UnitComponent*> components;

public:
    Legion() = default;  // Default constructor
    virtual ~Legion();   // Virtual destructor

    virtual void move() override;
    virtual void attack() override;
    virtual void add(UnitComponent* component) override;
    virtual void remove(UnitComponent* component) override;
    virtual void printUnitDetails() override;
    int getNumUnits() { return components.size(); }
    // UnitComponent* getUnit(int index) { return components[index]; }
    //  int getInfantryCount() {
    //     int count = 0;
    //     for (UnitComponent* component : components) {
    //         if (component->getType() == 'I') {
    //             count++;
    //         }
    //     }
    //     return count; 
};

#endif // LEGION_H