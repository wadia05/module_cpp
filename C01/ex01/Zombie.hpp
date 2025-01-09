#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie{

    private:
        std::string name;
    public :
        Zombie(); 
        void announce();
        ~Zombie();
        void set_name(const std::string name);

};
Zombie* zombieHorde( int N, std::string name );
#endif