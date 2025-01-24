#include "Dog.hpp"

Dog::Dog() : Animal() , _brain(new Brain())
{
    this->_type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(){
    delete _brain;
     std::cout << "Dog Destructor called" << std::endl;
}


Dog::Dog(const Dog& other) : Animal(other) ,_brain(new Brain(*other._brain)){

}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *_brain = *other._brain;
    }
    else
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}

void Dog::Dog::makeSound ()
{
    std::cout << "Woof! Woof!" << std::endl;
}


void Dog::setIdea(int index, std::string idea)
{
    this->_brain->setIdea(index , idea);
}
std::string Dog::getIdea(int index)
{
    return this->_brain->getIdea(index);
}