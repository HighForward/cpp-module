#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Burns("Burns", 5);
        std::cout << Burns;
        Burns.increment();
        Burns.increment();
        std::cout << Burns;
        Burns.increment();
        Burns.increment();
        std::cout << Burns;
        Burns.increment();
        std::cout << Burns;
    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}