#ifndef HUMAMB_HPP
#define HUMAMB_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    private :
        std::string name;
        Weapon *weapon;
    public :
        HumanB(std::string name);
        void setWeapon(Weapon& Weapon);
        void attack();

};


#endif