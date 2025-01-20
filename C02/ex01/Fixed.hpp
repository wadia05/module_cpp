#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    private :
        int _value;
        static const int _bitValue;

    public :
        Fixed(); //default constructor
        ~Fixed(); //destructor
        Fixed(const Fixed& other); //copy constructor
        Fixed& operator=(const Fixed& other); //copy assignment operator 

        //assignment operator 

        Fixed(const int n); //default constructor
        Fixed(const float f); //default constructor
        
        float toFloat( void ) const;
        int toInt( void ) const;    

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& out, const Fixed& other);

#endif