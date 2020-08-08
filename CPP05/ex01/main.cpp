#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat Burns("Burns", 30);
        Form Rental("Rental");

        std::cout << Burns;
        std::cout << Rental;
//        Loyer.beSigned(Burns);
        Burns.getName();
        Burns.signForm(Rental);
        std::cout << Rental;

    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}