#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat Burns("Burns", 30);
        Form Loyer("Loyer");

        std::cout << Burns;
        std::cout << Loyer;
//        Loyer.beSigned(Burns);
        Burns.getName();
        Burns.signForm(Loyer);
        std::cout << Loyer;


    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}