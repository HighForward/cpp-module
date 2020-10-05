#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardon", 25, 5, target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this != &copy)
	{
		Form::setSign(copy.getSign());
		Form::setTarget(copy.getTargetName());
	}
	return (*this);
}
void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if ((unsigned int)executor.getGrade() > getLvlExec())
    {
        throw PresidentialPardonForm::GradeTooLowException();
    }
    else if (!getSign())
    {
        throw PresidentialPardonForm::FormNotSignException();
    }
    std::cout << "< " << getTargetName() << " > is forgiven by Zafod Beeblebrox\n";
}
