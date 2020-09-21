#include <iostream>
#include <string>

int main(void)
{
    std::string *ptr = new std::string("HI THIS IS BRAIN");
    std::string &ref = *ptr;

    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
    delete ptr;
}