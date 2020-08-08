#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat Burns("Burns", 1);

        ShrubberyCreationForm Shrubb("Rental");
        RobotomyRequestForm Robotomy("Request");
        PresidentialPardonForm Pardon("President");

        Burns.signForm(Shrubb);
        Burns.signForm(Robotomy);
        Burns.signForm(Pardon);

        Shrubb.execute(Burns);
        Robotomy.execute(Burns);
        Pardon.execute(Burns);

        std::cout << "\n\n";

        Bureaucrat RH("RH", 100);

        RH.executeForm(Shrubb);
        RH.executeForm(Robotomy);
        RH.executeForm(Pardon);
    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}