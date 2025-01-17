#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_HitPoints = 100;
    this->_EnergyPoints  = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_HitPoints = 100;
    this->_EnergyPoints  = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{

    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        ClapTrap::operator =(other);
    }
    else 
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
     std::cout << "ScavTrap Destructor called" << std::endl;
}


void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}
void ScavTrap::attack(const std::string& target) {
    if (_EnergyPoints == 0 || _HitPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " can't attack - no energy or hit points left!" << std::endl;
        return;
    }
    _EnergyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
              << _AttackDamage << " points of damage!" << std::endl;
}