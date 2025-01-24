#include "Cat.hpp"


Cat::Cat() : Animal()
{
    _brain = new Brain();
    this->_type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(){
    delete this->_brain;
    std::cout << "Cat Destructor called" << std::endl;
}


Cat::Cat(const Cat& other) : Animal(other) ,_brain(new Brain(*other._brain)){
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *_brain = *other._brain;
    }
    else
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}

void Cat::makeSound ()
{
    std::cout << "I am cat miiyaaaw" << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
    this->_brain->setIdea(index , idea);
}
std::string Cat::getIdea(int index)
{
    return this->_brain->getIdea(index);
}