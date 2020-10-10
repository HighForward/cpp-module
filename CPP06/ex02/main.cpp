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
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
    else
    	std::cout << "Can't identify pointer type\n";
}

void identity_from_reference(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
		(void)a;
        std::cout << "A" << std::endl;
        return ;
    }
    catch (const std::exception& e)
    {
//        std::cout << e.what() << std::endl;
    }

    try
    {
        B &b = dynamic_cast<B&>(p);
		(void)b;
        std::cout << "B" << std::endl;
        return ;
    }
    catch (const std::exception &e)
    {
//        std::cout << e.what() << std::endl;
    }

    try
    {
        C &c = dynamic_cast<C&>(p);
		(void)c;
        std::cout << "C" << std::endl;
        return ;
    }
    catch (const std::exception &e)
    {
//        std::cout << e.what() << std::endl;
    }
	std::cout << "Can't identify reference type\n";
    return ;
}


int main()
{
    A *a_ptr = new A;
    B *b_ptr = new B;
    C *c_ptr = new C;
    Base *base_ptr = new Base;

	A a_ref;
	B b_ref;
	C c_ref;
	Base base_ref;
    identity_from_pointer(a_ptr);
    identity_from_pointer(b_ptr);
    identity_from_pointer(c_ptr);
    identity_from_pointer(base_ptr);

    identity_from_reference(a_ref);
    identity_from_reference(b_ref);
	identity_from_reference(c_ref);
	identity_from_reference(base_ref);
}