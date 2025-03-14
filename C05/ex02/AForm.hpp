#ifndef AFORM_HPP
#define AFORM_HPP


#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat; 

class AForm{
    private :
        const std::string _name;
        bool _isSigned ;// false
        const int _signGrade;
        const int _executeGrade;

    public :
        AForm();
        AForm(std::string name, int sigG , int execG);
        ~AForm();
        AForm(const AForm & other);
        AForm& operator=(const AForm & other);
        
        void beSigned(const Bureaucrat& bureaucrat);

        std::string getName() const;
        bool getIsSigned() const;
        int getSigbGreade() const;
        int getExeuteGrade() const;
        virtual void execute(Bureaucrat const & executor) const = 0;

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

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif