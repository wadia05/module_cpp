#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* nzombie = new Zombie[N];
    if (nzombie == NULL)
    {
        std::cout << "bad allocation " << std::endl;
        exit (1);
    }
    int i  = 0;
    while (i < N)
    {
        nzombie[i].set_name(name);
        i++;
    }
    return nzombie;
}