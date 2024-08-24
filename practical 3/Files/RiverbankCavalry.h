#ifndef RIVERBANKCAVALRY_H
#define RIVERBANKCAVALRY_H
#include "Cavalry.h"
class RiverbankCavalry: public Cavalry {
public:
RiverbankCavalry(int health, int damage, int defence, std::string name, char terrain, int currSold, int speed, double flankingBonus, double rbBonus);
virtual ~RiverbankCavalry();
private:
double rbBonus;
};

#endif // RIVERBANKCAVALRY_H