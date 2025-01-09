#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << this->name << "was out" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}
Zombie::Zombie () :name("wada")
{
    std::cout << "create object "<< std::endl;
}

void Zombie::set_name (const std::string name)
{
    this->name = name;
}