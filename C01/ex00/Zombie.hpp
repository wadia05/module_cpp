#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name); // Constructor
        ~Zombie(void); // Constructor
        void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif