#include "Intern.hpp"

int main()
{
	try
    {
		Intern Random;
		Form *form;
		Bureaucrat Someone("Quelqu'un", 1);
		form = Random.makeForm("presidential pardon", "Papa Johnny");
		Someone.executeForm(*form);
		Someone.signForm(*form);
		Someone.executeForm(*form);
		delete form;

		form = Random.makeForm("non_existent_form", "Papa Johnny");
	}
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}