#ifndef WOODLAND_CAVALRY_H
#define WOODLAND_CAVALRY_H
#include "Cavalry.h"
class WoodlandCavalry: public Cavalry {
public:
WoodlandCavalry(int health, int damage, int defence, std::string name, char terrain, int currSold,int speed, double flankingBonus, double wBonus);
~WoodlandCavalry();
void move();
void attack();
private:
double wBonus;

};

#endif // WOODLAND_CAVALRY_H