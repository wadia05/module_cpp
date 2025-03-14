#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : AForm(other), _target(other._target)
{
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & other)
{
    if (this != &other)
    {
        this->_target = other._target;
        AForm::operator=(other);
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigbGreade() < executor.getGrade())
        throw AForm::GradeTooLowException();
    else if (this->getIsSigned() == false)
        throw "Form not signed";
    else
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}