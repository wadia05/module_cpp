#include "Animal.hpp"


Animal::Animal () : _type("default")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this == &other)
    {
        this->_type = other._type;
    }
    else 
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}
Animal::Animal(const Animal& otehr)
{
    *this = otehr;
}


// void Animal::makeSound()
// {
//     std::cout << "I am  the parent" << std::endl;
// }

void Animal::getType ()
{
    std::cout <<"Animal Type == " + _type <<std::endl;
}

