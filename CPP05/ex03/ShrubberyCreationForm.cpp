#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreation", 145, 137, target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)
    {
		Form::setSign(copy.getSign());
		Form::setTarget(copy.getTargetName());
    }
    return (*this);
}
void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if ((unsigned int)executor.getGrade() > getLvlExec())
	{
		throw ShrubberyCreationForm::GradeTooLowException();
	}
	else if (!getSign())
	{
		throw ShrubberyCreationForm::FormNotSignException();
	}
    std::string filename = "<" + getTargetName() + ">" + "_shrubbery";
    std::ofstream file(filename.c_str());
    if (file.is_open())
    {
        std::cout << filename << " successfully created\n";
        file << "      /\\      \n"
                "     /\\*\\     \n"
                "    /\\O\\*\\    \n"
                "   /*/\\/\\/\\   \n"
                "  /\\O\\/\\*\\/\\  \n"
                " /\\*\\/\\*\\/\\/\\ \n"
                "/\\O\\/\\/*/\\/O/\\\n"
                "      ||      \n"
                "      ||      \n"
                "      ||      ";
        file.close();
    }


}