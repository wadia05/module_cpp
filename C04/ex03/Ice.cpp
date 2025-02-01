#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
     std::cout << "Ice destructor called" << std::endl;
}
Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}
Ice::Ice(const Ice& other)
{
    this->type = other.type;
    std::cout << "Ice copy constructor called" << std::endl;
}
Ice& Ice::operator=(const Ice& other) 
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
     std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}