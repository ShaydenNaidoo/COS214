//ABSTRACT_PRODUCT
#include "Infantry.h"

Infantry::Infantry(int health, int damage, int defence, std::string name, char type, char terrain, int currSold, int hTHCombatBonus, int armorBonus)
: LegionUnit(health, damage, defence, name, type, terrain, currSold) {
    this->hTHCombatBonus = hTHCombatBonus;
    this->armorBonus = armorBonus;
}

