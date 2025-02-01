#include "Character.hpp"

Character::Character()
{
    _name = "";
    for(int i = 0;  i<4 ;i++)
        _inventory[i] = nullptr;
}

Character::Character(std::string const & name) : _name(name)
{
    for(int i = 0;  i<4 ;i++)
        _inventory[i] = nullptr;
}

Character::Character(const Character& other) : _name(other._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = nullptr;
    }
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        for(int i = 0;  i<4 ;i++)
        {
            if (_inventory[i])
                delete _inventory[i];
        }
        _name = other._name;
        for (int i = 0; i < 4; i++)
        {
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = nullptr;
        }
    }
    return *this;
}

Character::~Character()
{
    for(int i = 0;  i<4 ;i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m) 
{
    if (!m) return;
    for(int i = 0 ; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return;
        }
    }
    // delete m;
}

void Character::unequip(int idx) 
{
    if (idx < 0 || idx >= 4 || !_inventory[idx])
    {
        std::cout << "Wrong index 1" << std::endl;
        return;
    }
    _inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !_inventory[idx])
    {
        std::cout << "Wrong index 2" << std::endl;
        return;
    }
    _inventory[idx]->use(target);
}