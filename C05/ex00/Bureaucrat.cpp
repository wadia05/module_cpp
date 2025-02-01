#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Defualt"), _grade(0)
{
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "end" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    *this = other;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        _grade = this->getGrade();
    }
    return *this;
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &other)
{
    out << other.getName() << ", bureaucrat grade " << other.getGrade();
    return out;
}

void Bureaucrat::radeTooHighException()
{
    if (this->getGrade() <= 1)
       throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}
void Bureaucrat::radeTooLowException()
{
    if (this->getGrade() >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}
std::string Bureaucrat::getName() const
{
    return this->_name;
}
int Bureaucrat::getGrade() const
{
    return this->_grade;
}
