#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern &copy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
    std::cout << "Assignation operator" << std::endl;
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}


Form *Intern::makeForm(const std::string &formName, const std::string &targetName)
{

    std::string formType[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *(Intern::*tab[])(const std::string &target) = {&Intern::createShrubbery, &Intern::createRobotomy, &Intern::createPresidential};

    for (int i = 0; i < 3; i++)
    {
       if  (formType[i].find(formName, 0) != std::string::npos)
       {
           Form *nw = (this->*tab[i])(targetName);
           std::cout << "Intern creates " << nw->getName() << std::endl;
           return (nw);
       }
    }
    throw Intern::FormTypeDoNotExist();
}
Form *Intern::createShrubbery(const std::string &target)
{
    return (new ShrubberyCreationForm(target));
}
Form *Intern::createRobotomy(const std::string &target)
{
    return (new RobotomyRequestForm(target));
}
Form *Intern::createPresidential(const std::string &target)
{
    return (new PresidentialPardonForm(target));
}
const char *Intern::FormTypeDoNotExist::what() const throw()
{
    return ("ERROR: Form Type Do Not Exists");
}
