#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("ShrubberyCreation", 72, 45, target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    std::cout << "Assignation operator" << std::endl;
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}
void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::cout << "BRRBLLBLBRLBLRLBLBLBLRLBLZZGZGZGZGZ\n< " << getTargetName() << " > successfully robotomized\n";
}
