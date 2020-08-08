#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat Burns("Burns", 1);

        ShrubberyCreationForm Shrubb("Rental");
        RobotomyRequestForm Robotomy("Request");
        PresidentialPardonForm Pardon("President");

        Intern intern;
        Form *rrf;

        rrf = intern.makeForm("shrubbedry creation", "Render");
    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}