#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

    public :
        ScavTrap();
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();

        ScavTrap(std::string name);
        ScavTrap(std::string name, int EnergyPoints);

        void guardGate();
        void attack(const std::string& target);
};
#endif