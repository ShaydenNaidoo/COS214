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
};

#endif // LEGION_H