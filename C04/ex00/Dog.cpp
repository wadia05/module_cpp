#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(){
     std::cout << "Dog Destructor called" << std::endl;
}


Dog::Dog(const Dog& other) : Animal(other){

}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
    }
    else
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}

void Dog::makeSound ()
{
    std::cout << "I am Dog hhhhhh" << std::endl;
}