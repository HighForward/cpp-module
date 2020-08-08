#include <iostream>
#include <exception>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identity_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
}

void identity_from_reference(Base &p)
{
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::bad_cast &e)
    {
//        std::cout << e.what() << std::endl;
    }

    try
    {
        dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch (const std::bad_cast &e)
    {
//        std::cout << e.what() << std::endl;
    }

    try
    {
        dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (const std::bad_cast &e)
    {
//        std::cout << e.what() << std::endl;
    }
}


int main()
{
    A *a = new A;
    B *b = new B;
    C *c = new C;

    identity_from_pointer(a);
    identity_from_pointer(b);
    identity_from_pointer(c);

    identity_from_reference(*a);
    identity_from_reference(*b);
    identity_from_reference(*c);
}