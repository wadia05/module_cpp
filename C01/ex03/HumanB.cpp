#include "HumanB.hpp"
HumanB::HumanB(std::string name) : name(name) ,weapon(NULL){
}

void HumanB::setWeapon(Weapon& Weapon)
{
    this->weapon = &Weapon;
}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack with!"<< std::endl;
}