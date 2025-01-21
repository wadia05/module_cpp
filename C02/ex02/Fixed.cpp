#include "Fixed.hpp"

const int Fixed::_bitValue = 8; // or some other value
Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}
Fixed &Fixed::operator=(const Fixed &other)
{

    if (this != &other)
    {
        this->_value = other.getRawBits();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &other)
{
    out << other.toFloat();
    return out;
}

Fixed::Fixed(const int n)
{
    // Just shift the int left by 8 bits
    this->_value = n << this->_bitValue;
}
Fixed::Fixed(const float f)
{
    // Multiply by 256 and round to nearest int
    this->_value = roundf(f * (1 << this->_bitValue));
}

float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << this->_bitValue);
}
int Fixed::toInt(void) const
{
    return (this->_value >> this->_bitValue);
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}
void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

// he 6 comparison operators: >, <, >=, <=, == and !=
bool Fixed::operator<(const Fixed &other)
{
    return (this->_value < other._value);
}
bool Fixed::operator>(const Fixed &other)
{
    return (this->_value > other._value);
}
bool Fixed::operator<=(const Fixed &other)
{
    return (this->_value <= other._value);
}
bool Fixed::operator>=(const Fixed &other)
{
    return (this->_value >= other._value);
}
bool Fixed::operator==(const Fixed &other)
{
    return (this->_value == other._value);
}
bool Fixed::operator!=(const Fixed &other)
{
    return (this->_value != other._value);
}

// The 4 arithmetic operators: +, -, *, and /

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &other)
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other)
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other)
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other)
{
    if (other._value == 0)
    {
        std::cout << "Error: Division by zero" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / other.toFloat());
}

// Increment/Decrement operators
Fixed &Fixed::operator++()
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_value++;
    return tmp;
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_value--;
    return tmp;
}
// min | max
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a._value < b._value) ? a : b;
}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a._value < b._value) ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a._value > b._value) ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a._value > b._value) ? a : b;
}