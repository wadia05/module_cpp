#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    return (this->type);
}

Weapon::Weapon(const std::string& str)
{
   this->type = str;
}
void Weapon::setType(const std::string& type)
{
    this->type = type;
}