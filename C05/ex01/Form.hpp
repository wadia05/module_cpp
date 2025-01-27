#ifndef FORM_HPP
#define FORM_HPP


#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat; 

class Form{
    private :
        const std::string _name;
        bool _isSigned ;// false
        const int _signGrade;
        const int _executeGrade;

    public :
        Form();
        Form(std::string name, int sigG , int execG);
        ~Form();
        Form(const Form & other);
        Form operator=(const Form & other);
        
        void beSigned();

    
};



#endif