#include "ClapTrap.hpp"

/*
    processing the Orthodox Canonical Form  of ClapTrap class
    that include :
        * default constructor
        * copy constructor
        * Desconstructor
        * copy assignment operator
    Additional constructor :
        * parameterized constructor !!

*/

// parameterized constructor
ClapTrap::ClapTrap(std::string name)
    : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
}
// default constructor
ClapTrap::ClapTrap()
    : _name("default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap &origenal)
    : _name(origenal._name), _HitPoints(origenal._HitPoints),
      _EnergyPoints(origenal._EnergyPoints), _AttackDamage(origenal._AttackDamage)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
}

// copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &origenal)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (&origenal != this)
    {
        this->_name = origenal._name;
        this->_HitPoints = origenal._HitPoints;
        this->_EnergyPoints = origenal._EnergyPoints;
        this->_AttackDamage = origenal._AttackDamage;
    }
    else
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}
// Deconstructor
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

/*
    processing methods / Member functions of ClapTrap
    include :
        * void attack(const std::string& target);
            -> Costs 1 energy point and prints damage message
        * void takeDamage(unsigned int amount);
            -> Reduces hit points
        * void beRepaired(unsigned int amount);
            -> Costs 1 energy point and restores hit points
*/

void ClapTrap::attack(const std::string &target)
{
    if (_EnergyPoints == 0 || _HitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack - no energy or hit points left!" << std::endl;
        return;
    }
    _EnergyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
              << _AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints <= amount)
        _HitPoints = 0;
    else
        _HitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! "
              << "Hit points remaining: " << _HitPoints << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoints == 0 || _HitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair - no energy or hit points left!" << std::endl;
        return ;
    }
    _EnergyPoints--;
    _HitPoints+=amount;
        std::cout << "ClapTrap " << _name << " repairs itself for " << amount 
              << " hit points! Current hit points: " << _HitPoints << std::endl;
}