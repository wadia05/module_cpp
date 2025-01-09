#include "HumanA.hpp"
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) { // Change here
}


// this line " :name(name),weapon(weapon) " equvalent to 
// this.name =  name;
// this.weapon =  Weapon;

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}