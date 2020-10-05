#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat Damn("Burns", 30);
        Form Rental("Rental");

        std::cout << Damn;
        std::cout << Rental;
        Damn.getName();
        Damn.signForm(Rental);
        std::cout << Rental;

    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }

	try
	{
		Bureaucrat Damn("Burns", 70);
		Form Rental("Rental");

		std::cout << Damn;
		std::cout << Rental;
		Damn.signForm(Rental);
		std::cout << Rental;

	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Damn("Burns", 50);
		Form Rental("Rental");

		std::cout << Damn;
		std::cout << Rental;
		Rental.beSigned(Damn);
		std::cout << Rental;

	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}