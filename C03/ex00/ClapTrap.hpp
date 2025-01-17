#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
    private :
        std::string _name;
        unsigned int _HitPoints;
        unsigned int _EnergyPoints;
        unsigned int _AttackDamage;

    public :
        // Orthodox Canonical Form
        ClapTrap();
        ClapTrap(const ClapTrap& origenal);
        ClapTrap& operator=(const ClapTrap& origenal);
        ~ClapTrap();
        // Additional constructor
        ClapTrap(std::string name);
        // Member functions
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif