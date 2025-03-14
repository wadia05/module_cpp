#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm & other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm & other);
        void execute(Bureaucrat const & executor) const;
};
#endif  