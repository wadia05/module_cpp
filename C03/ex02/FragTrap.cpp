#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    this->_HitPoints = 100;
    this->_EnergyPoints  = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->_HitPoints = 100;
    this->_EnergyPoints  = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::~FragTrap ()
{
   std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    else
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}



void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " requests a positive high five!" << std::endl;
}