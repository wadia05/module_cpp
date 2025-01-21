#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int _value;
    static const int _bitValue;

public:
    Fixed();                   // default constructor
    ~Fixed();                  // destructor
    Fixed(const Fixed &other); // copy constructor
    Fixed &operator=(const Fixed &other);

    // he 6 comparison operators: >, <, >=, <=, == and !=
    bool operator<(const Fixed &other);
    bool operator>(const Fixed &other);
    bool operator<=(const Fixed &other);
    bool operator>=(const Fixed &other);
    bool operator==(const Fixed &other);
    bool operator!=(const Fixed &other);

    // The 4 arithmetic operators: +, -, *, and /
    Fixed operator+(const Fixed &other);
    Fixed operator-(const Fixed &other);
    Fixed operator*(const Fixed &other);
    Fixed operator/(const Fixed &other);

    // The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
    // post-decrement) operators
    // pre-
    Fixed &operator++();
    Fixed &operator--();
    // post-
    Fixed operator++(int);
    Fixed operator--(int);

    // min | max
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);

    Fixed(const int n);   // default constructor
    Fixed(const float f); // default constructor

    float toFloat(void) const;
    int toInt(void) const;

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &other);

#endif