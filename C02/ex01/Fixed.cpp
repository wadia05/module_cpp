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
std::ostream& operator<<(std::ostream& out, const Fixed& other)
{
    out << other.toFloat();
    return out;
}

Fixed::Fixed(const int n)
{
    // Just shift the int left by 8 bits
    this->_value = n << this->_bitValue;
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float f)
{
    // Multiply by 256 and round to nearest int
    this->_value = roundf(f * (1<<this->_bitValue));
     std::cout << "float constructor called" << std::endl;
}


float  Fixed::toFloat (void) const
{
    return (float)this->_value / (1 << this->_bitValue);
}
int  Fixed::toInt (void) const
{
    return (this->_value >> this->_bitValue);
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