#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap(std::string name) : 
    ClapTrap(name + "_clap_name"),
    FragTrap(name),
    ScavTrap(name)
{
    this->_name = name;
    this->_HitPoints = FragTrap::_HitPoints;        // 100 HP from FragTrap
    this->_EnergyPoints = ScavTrap::_EnergyPoints;  // 50 EP from ScavTrap
    this->_AttackDamage = FragTrap::_AttackDamage;  // 30 AD from FragTrap
    
    std::cout << "DiamondTrap parameterized constructor called" << std::endl;
    std::cout << "Hit Points: " << _HitPoints << std::endl;
    std::cout << "Energy Points: " << _EnergyPoints << std::endl;
    std::cout << "Attack Damage: " << _AttackDamage << std::endl;
}

// Update default constructor similarly
DiamondTrap::DiamondTrap() : 
    ClapTrap("default_clap_name"),
    FragTrap(),
    ScavTrap()
{
    this->_name = "default";
    this->_HitPoints = FragTrap::_HitPoints;        // 100 HP from FragTrap
    this->_EnergyPoints = ScavTrap::_EnergyPoints;  // 50 EP from ScavTrap
    this->_AttackDamage = FragTrap::_AttackDamage;  // 30 AD from FragTrap
    
    std::cout << "DiamondTrap default constructor called" << std::endl;
    std::cout << "Hit Points: " << _HitPoints << std::endl;
    std::cout << "Energy Points: " << _EnergyPoints << std::endl;
    std::cout << "Attack Damage: " << _AttackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other) , FragTrap(other),  ScavTrap(other)
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

void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack (target);
}