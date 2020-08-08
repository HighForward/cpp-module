#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("ShrubberyCreation", 25, 5, target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    std::cout << "Assignation operator" << std::endl;
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}
void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::cout << "< " << getTargetName() << " > is forgiven by Zafod Beeblebrox\n";
}
