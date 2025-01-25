#include "AMateria.hpp"
//abstarct

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}
AMateria::AMateria(std::string const & type): type(type)
{
    std::cout << "AMateria parameter constructor called" << std::endl;
}
AMateria::AMateria(const AMateria& other){

    *this = other;
    std::cout << "AMateria copy constructor called" << std::endl;
}
std::string const & AMateria::getType() const {
    return type;
}
AMateria& AMateria::operator=(const AMateria& other){

    if (this != &other)
    {
        this->type = other.type;
    std::cout << "AMateria assignment operator called" << std::endl;
    }
    return *this;
}

void AMateria::use(ICharacter& target)
{
     std::cout << "* shoots an AMateria bolt at " << target.getName() << " *" << std::endl;
}