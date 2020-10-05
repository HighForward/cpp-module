#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
    if (this != &copy)
    {

    }
    return (*this);
}


Form *Intern::makeForm(const std::string &formName, const std::string &targetName)
{

    std::string formType[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *(Intern::*tab[])(const std::string &target) = {&Intern::createShrubbery, &Intern::createRobotomy, &Intern::createPresidential};

    for (int i = 0; i < 3; i++)
    {
    	if  (formType[i] == formName)
    	{
    		std::cout << formName << std::endl;
    		return ((this->*tab[i])(targetName));
    	}
    }
    throw Intern::FormTypeDoNotExist();
}

Form *Intern::createShrubbery(const std::string &target)
{
	Form *form = new ShrubberyCreationForm(target);
    return (form);
}

Form *Intern::createRobotomy(const std::string &target)
{
	Form *form = new RobotomyRequestForm(target);

    return (form);
}

Form *Intern::createPresidential(const std::string &target)
{
	Form *form = new PresidentialPardonForm(target);
    return (form);
}

const char *Intern::FormTypeDoNotExist::what() const throw()
{
    return ("ERROR: Form Type Do Not Exists");
}
