#ifndef MODULE_CPP_PRESIDENTIALPARDONFORM_HPP
#define MODULE_CPP_PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(const std::string &target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
        virtual void execute(Bureaucrat const &executor) const;

};

#endif
