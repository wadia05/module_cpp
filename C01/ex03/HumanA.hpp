#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon &weapon; // Reference to Weapon
    public:
        HumanA(std::string name, Weapon &weapon); // Constructor
        void attack();
};

#endif