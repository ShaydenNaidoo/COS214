#ifndef CAVALRY_H
#define CAVALRY_H

// Include any necessary headers here
#include "LegionUnit.h"
#include <iostream>
#include <string>
// Declare your class and its members
class Cavalry: public LegionUnit {
public:
   Cavalry();
   Cavalry(int health, int damage, int defence, std::string name, char terrain, int currSold, int speed, double flankingBonus);
   virtual ~Cavalry();
    
private:
    // Private member variables
    	std::string unitName;
		char terrain;
		int currSold;
		int healthPerSoldier;
		int defencePerSoldier;
		int damagePerSoldier;
        double flankingBonus;
        int speed;
    // Private member functions
};

#endif // CAVALRY_H