#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
// #include <iostream>
class Animal{
    protected:
        std::string _type;
    public :
        Animal();
        ~Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        void makeSound();
        std::string getType();
};



#endif