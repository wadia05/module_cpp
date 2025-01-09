#include "Zombie.hpp"

int main (void)
{
    Zombie* my_zombie;
    my_zombie = zombieHorde(5, "wadia");
    int i = 0;
    while(i< 5)
    {
        my_zombie[i].announce();
        i++;
    }
    delete[] my_zombie;
}