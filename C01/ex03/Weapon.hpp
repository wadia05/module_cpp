#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
    private :
        std::string type;
    public :
        Weapon(const std::string& str);
        const std::string& getType();
        void setType(const std::string& type); // Change here
};

#endif