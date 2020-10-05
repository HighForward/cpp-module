#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat Jordo("Jordo", 1);

        ShrubberyCreationForm Shrubb("Rental");
        RobotomyRequestForm Robotomy("Request");
        PresidentialPardonForm Pardon("Trump");

        Jordo.signForm(Shrubb);
        Jordo.signForm(Robotomy);
        Jordo.signForm(Pardon);

        Shrubb.execute(Jordo);
        Robotomy.execute(Jordo);
        Pardon.execute(Jordo);

        std::cout << "\n\n";

        Bureaucrat Johnny("Papa Johnny", 100);

		Johnny.executeForm(Shrubb);
		Johnny.executeForm(Robotomy);
		Johnny.executeForm(Pardon);

		ShrubberyCreationForm Shrubb2("Rental");

		Johnny.executeForm(Shrubb2);
	}
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}