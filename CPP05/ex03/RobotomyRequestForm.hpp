#ifndef MODULE_CPP_ROBOTOMYREQUESTFORM_HPP
#define MODULE_CPP_ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(const std::string &target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
        virtual void execute(Bureaucrat const &executor) const;

};

#endif
