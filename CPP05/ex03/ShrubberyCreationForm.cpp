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
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    std::cout << "Assignation operator" << std::endl;
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}
void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::string filename = "<" + getTargetName() + ">" + "_shrubbery";
    std::ofstream file(filename);
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