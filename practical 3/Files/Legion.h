#ifndef LEGION_H
#define LEGION_H
#include <vector>
#include "UnitComponent.h"

class Legion : public UnitComponent {
public:
    void move() override;
    void fight() override;
    void add(UnitComponent* component) override;
    void remove(UnitComponent* component) override;
    ~Legion() override;
private:
    std::vector<UnitComponent*> components;
};

#endif // LEGION_H