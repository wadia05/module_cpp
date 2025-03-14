#include "AForm.hpp"

AForm::AForm() : _name("defualt"), _isSigned(false), _signGrade(0), _executeGrade(0)
{
}
AForm::~AForm()
{
}

AForm::AForm(std::string name, int sigG, int execG) :
_name(name), _isSigned(false), _signGrade(sigG), _executeGrade(execG)
{
    if(sigG < 1 && execG < 1)
        throw AForm::GradeTooHighException();
    else if(sigG > 150 && execG > 150)
        throw AForm::GradeTooHighException();
}
AForm::AForm(const AForm &other) : 
_name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
}

AForm& AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->_isSigned = other._isSigned;
    }
    return *this;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _signGrade)
        AForm::GradeTooLowException();
    this->_isSigned = true;
}
std::string AForm::getName()const{
    return _name;
}
bool AForm::getIsSigned()const{
    return _isSigned;
}

int AForm::getSigbGreade()const{
    return _signGrade;
}
int AForm::getExeuteGrade()const{
    return _executeGrade;
}
std::ostream &operator<<(std::ostream &os, const AForm &form) {
    os << "Form name: " << form.getName()
       << ", Sign Grade Required: " << form.getIsSigned()
       << ", Execute Grade Required: " << form.getSigbGreade()
       << ", Signed: " << form.getExeuteGrade();
    return os;
}
