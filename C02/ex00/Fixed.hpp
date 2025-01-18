#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
    private :
        int _value;
        static const int _bitValue;

    public :
        Fixed(); //default constructor
        ~Fixed(); //destructor
        Fixed(const Fixed& other); //copy constructor
        Fixed& operator=(const Fixed& other); //copy assignment operator 

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif