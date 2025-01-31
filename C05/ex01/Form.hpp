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
        Form& operator=(const Form & other);
        
        void beSigned(const Bureaucrat& bureaucrat);

        std::string getName() const;
        bool getIsSigned() const;
        int getSigbGreade() const;
        int getExeuteGrade() const;

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Grade is too high";
                }
        };
        
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Grade is too low";
                }
        };
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif