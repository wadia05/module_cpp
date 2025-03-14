#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private:
        std::string _target;
    public:
        PresidentialPardonForm(std::string target);// parameterized constructor

        PresidentialPardonForm();//default constructor
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm & other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm & other);
        void execute(Bureaucrat const & executor) const;
};

#endif
