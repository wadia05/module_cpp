#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
     std::cout << "Cure destructor called" << std::endl;
}
Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}
Cure::Cure(const Cure& other) : AMateria(other)
{
    std::cout << "Cure copy constructor called" << std::endl;
}
Cure& Cure::operator=(const Cure& other) 
{
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;

}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
     std::cout << "* shoots an Cure bolt at " << target.getName() << " *" << std::endl;
}