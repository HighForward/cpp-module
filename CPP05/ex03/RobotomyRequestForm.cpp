#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("ShrubberyCreation", 72, 45, target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
	{
		Form::setSign(copy.getSign());
		Form::setTarget(copy.getTargetName());
	}
	return (*this);
}
void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if ((unsigned int)executor.getGrade() > getLvlExec())
	{
		throw RobotomyRequestForm::GradeTooLowException();
	}
	else if (!getSign())
	{
		throw RobotomyRequestForm::FormNotSignException();
	}
    std::cout << "BRRBLLBLBRLBLRLBLBLBLRLBLZZGZGZGZGZ\n< " << getTargetName() << " > successfully robotomized\n";
}
