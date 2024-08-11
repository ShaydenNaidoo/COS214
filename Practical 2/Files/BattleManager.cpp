#include "BattleManager.h"

BattleManager::BattleManager(){
    this->army = new MainManager(50);
    this->enemy = new MainManager(55);

    this->army->createUnit(0,10,15,9,"1st Infantry Unit");
    this->enemy->createUnit(0,10,15,9,"The enemy");
    this->army->createUnit(0,10,15,9,"2nd Infantry Unit");
    this->enemy->createUnit(0,10,15,9,"The enemy");    
    this->army->createUnit(0,10,15,9,"3rd Infantry Unit");
    this->enemy->createUnit(0,10,15,9,"The enemy");
    this->army->createUnit(0,10,15,9,"4th Infantry Unit");
    this->enemy->createUnit(0,10,15,9,"The enemy");
    this->army->createUnit(0,10,15,9,"5th Infantry Unit");
    this->enemy->createUnit(0,10,15,9,"The enemy");
    this->enemy->createUnit(0,10,15,9,"The enemy");

    this->army->createUnit(1,25,5,25,"1st Shield Bearer Unit");
    this->enemy->createUnit(1,25,5,25,"The enemy");
    this->army->createUnit(1,25,5,25,"2nd Shield Bearer Unit");
    this->enemy->createUnit(1,25,5,25,"The enemy");
    this->army->createUnit(1,25,5,25,"3rd Shield Bearer Unit");
    this->enemy->createUnit(1,25,5,25,"The enemy");
    this->enemy->createUnit(1,25,5,25,"The enemy");

    this->army->createUnit(2,10,15,9,"1st Boatman Unit");
    this->enemy->createUnit(2,10,15,9,"The enemy");
    this->army->createUnit(2,10,15,9,"2nd Boatman Unit");
    this->enemy->createUnit(2,10,15,9,"The enemy");
    this->army->createUnit(2,10,15,9,"3rd Boatman Unit");
    this->enemy->createUnit(2,10,15,9,"The enemy");
    this->army->createUnit(2,10,15,9,"4th Boatman Unit");
    this->army->createUnit(2,10,15,9,"5th Boatman Unit");  

}

BattleManager::BattleManager(MainManager *army){
    this->army = army;
    this->enemy = new MainManager(army->getAmountOfSoldiersPerUnit());

    this->enemy->createUnit(0,20,25,19,"The enemy");
    this->enemy->createUnit(0,20,25,19,"The enemy");
    this->enemy->createUnit(0,20,25,19,"The enemy");
    this->enemy->createUnit(0,20,25,19,"The enemy");
    this->enemy->createUnit(0,20,25,19,"The enemy");
    this->enemy->createUnit(0,20,25,19,"The enemy");
    this->enemy->createUnit(0,20,25,19,"The enemy");

    this->enemy->createUnit(1,35,15,35,"The enemy");
    this->enemy->createUnit(1,35,15,35,"The enemy");
    this->enemy->createUnit(1,35,15,35,"The enemy");
    this->enemy->createUnit(1,35,15,35,"The enemy");
    this->enemy->createUnit(1,35,15,35,"The enemy");

    this->enemy->createUnit(2,20,25,19,"The enemy");
    this->enemy->createUnit(2,20,25,19,"The enemy");
    this->enemy->createUnit(2,20,25,19,"The enemy");
    this->enemy->createUnit(2,20,25,19,"The enemy");
    this->enemy->createUnit(2,20,25,19,"The enemy");
    this->enemy->createUnit(2,20,25,19,"The enemy");

    this->enemy->createUnit(1,50,25,50,"The boss enemy");

}

void BattleManager::Start(){
    std::cout << "\t\t\t\t\t\t\t\033[1;35The Call of Destiny\033[0m\n"
    << "In the year 100 BC, Rome is a republic on the brink of empire. To the north, hostile barbarian tribes threaten the\n"
    << "borders. To the east, the vast realms of Parthia eye Rome warily. Amidst political chaos, a young Roman legionnaire,\n"
    << "Titus Flavius, rises through the ranks, destined to shape the future of the mightiest army the world has ever seen.\n"
    << "As Titus rises through the ranks in a time of war and expansion, you are tasked with strategically building and\n"
    << "managing the Roman legions using advanced military systems. You are Titus's strategist, you have full control of the\n"
    << "legion while Titus leads his troops into battle.\n\n"
    << "The mighty Roman Legion is currently moving to the East to face the vast realms of Parthia who recently showed Rome\n"
    << "their hostility while the legion was in the North.\n\n\n\033[1;37mRules Of The Game:\033[0m\n"
    << "-";




}
