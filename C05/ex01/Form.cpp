#include "Form.hpp"

Form::Form() : _name("defualt"), _isSigned(false), _signGrade(0), _executeGrade(0)
{
}
Form::~Form()
{
}

Form::Form(std::string name, int sigG, int execG) :
_name(name), _isSigned(false), _signGrade(sigG), _executeGrade(execG)
{
    if(sigG < 1 && execG < 1)
        throw Form::GradeTooHighException();
    else if(sigG > 150 && execG > 150)
        throw Form::GradeTooHighException();
}
Form::Form(const Form &other) : 
_name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
}

Form& Form::operator=(const Form &other)
{
    if (this != &other)
    {
        _isSigned = other._isSigned;
    }
    return *this;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _signGrade)
        Form::GradeTooLowException();
    this->_isSigned = true;
}
std::string Form::getName()const{
    return _name;
}
bool Form::getIsSigned()const{
    return _isSigned;
}

int Form::getSigbGreade()const{
    return _signGrade;
}
int Form::getExeuteGrade()const{
    return _executeGrade;
}
std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "Form name: " << form.getName()
       << ", Sign Grade Required: " << form.getIsSigned()
       << ", Execute Grade Required: " << form.getSigbGreade()
       << ", Signed: " << form.getExeuteGrade();
    return os;
}
