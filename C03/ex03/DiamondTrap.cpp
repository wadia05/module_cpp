#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap() , FragTrap() 
{

    ClapTrap::_name = "default_clap_name";
    this->_name = "default";
    this->_HitPoints = FragTrap::_HitPoints;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
    std::cout << "DiamondTrap default constructor called" << std::endl;

}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    this->_HitPoints = FragTrap::_HitPoints;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
    std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other) , ScavTrap(other) , FragTrap(other)
{
    this->_name = other._name;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if(this != &other)
    {
        ScavTrap::operator=(other);
        this->_name = other._name;
    }
    else
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}
void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << this->_name 
              << " and my ClapTrap name is " << ScavTrap::_name << std::endl;
}


