#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Master("Master", 5);

        Bureaucrat Diablox9(Master);

        std::cout << Diablox9;

        std::cout << Master;
        Master.increment();
        Master.increment();
        std::cout << Master;
        Master.increment();
        Master.increment();
        std::cout << Master;
        Master.increment();
        std::cout << Master;

	}
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }

	try
	{
		Bureaucrat Master("Damso", 160);
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Master("Damso", -12);
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Master("Damso", 149);
		Master.decrement();
		std::cout << Master;
		Master.decrement();
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}