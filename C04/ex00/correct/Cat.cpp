#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(){
     std::cout << "Cat Destructor called" << std::endl;
}


Cat::Cat(const Cat& other) : Animal(other){

}
Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
    }
    else
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}

void Cat::makeSound ()
{
    std::cout << "I am cat miiyaaaw" << std::endl;
}