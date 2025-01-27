#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Defualt"), _grade(0)
{
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw std::invalid_argument("Grade too high!");
    else if (grade > 150)
        throw std::invalid_argument("Grade too Low!");
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
        throw std::runtime_error("Grade is already at the highest level!");
    this->_grade--;
}
void Bureaucrat::radeTooLowException()
{
    if (this->getGrade() >= 150)
        throw std::runtime_error("Grade is already at the lowest level!");
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