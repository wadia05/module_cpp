#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp" 

class Form;
class Bureaucrat{

    private :
        const std::string _name;
        int _grade;
    public :

        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat & other);
        Bureaucrat& operator=(const Bureaucrat & other);

        void radeTooHighException();
        void radeTooLowException();
        std::string getName() const;
        int getGrade() const;

        void signForm(AForm& form);
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw(){
                    return "Grade is too high";
                }
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw(){
                    return "Grade is too low";
                }
        };

};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &other);

#endif