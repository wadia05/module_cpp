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
        virtual ~Animal() = 0;
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual void makeSound() = 0;
        void getType();
};



#endif