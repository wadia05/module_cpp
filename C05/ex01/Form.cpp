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
}
Form::Form(const Form &other) : 
_name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
}

Form Form::operator=(const Form &other)
{
    if (this != &other)
    {
        _isSigned = other._isSigned
    }
    return *this
}

Form::beSigned()
{
    
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other)
{
    out << other.getName() << ", bureaucrat grade " << other.getGrade();
    return out;
}