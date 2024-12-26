#include "Zombie.hpp"
Zombie::~Zombie()
{
    std::cout << this->name << "was out" << std::endl;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}

Zombie* newZombie(std::string name)
{
    Zombie* nzombie = new Zombie(name);
    if (nzombie == NULL)
    {
        std::cout << "bad allocation" << std::endl;
        exit(1);
    }
    return nzombie;
}

void randomChump(std::string name)
{
    Zombie temp(name);
    temp.announce();
}

int main(void)
{
    Zombie* myZombie = newZombie("Zombie1");
    myZombie->announce();
    randomChump("Zombie2");
    delete myZombie;
    return 0;
}