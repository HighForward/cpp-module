#ifndef MODULE_CPP_INTERN_HPP
#define MODULE_CPP_INTERN_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &copy);
        Form *createShrubbery(const std::string &target);
        Form *createRobotomy(const std::string &target);
        Form *createPresidential(const std::string &target);

        Form* makeForm(const std::string &formName, const std::string &targetName);

    class FormTypeDoNotExist : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

#endif
