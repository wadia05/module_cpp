#include "Fixed.hpp"

const int Fixed::_bitValue = 8; // or some other value
Fixed::Fixed() :_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_value = other.getRawBits();
    }
    return *this;
}

Fixed::Fixed(const int n)
{
    
}
Fixed::Fixed(const float f)
{

}


float  Fixed::toFloat (void) const
{

}
int  Fixed::toInt (void) const
{

}


int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" <<std::endl;
    this->_value = raw;
}