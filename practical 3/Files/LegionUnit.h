#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H
#include <string>
#include <iostream>

class LegionUnit {
public:
    virtual void move() =0;
    virtual void attack() = 0;
    int getHealthPerSoldier() const;
	int getDamagePerSoldier() const;
	int getDefencePerSoldier()const;
	std::string getUnitName() const;
	char getTerrain() const;
	void setCurrNumSoldiers(int num);
	int getCurrNumSoldiers() const;
	void incrementDamage(int damage);
	int getDamageTaken();
    virtual ~LegionUnit() ;
  
private:
        std::string name;
		int currSold;
		int healthPerSoldier;
		int defencePerSoldier;
        int damagePerSoldier;
        char terrain;
};

#endif // LEGIONUNIT_H