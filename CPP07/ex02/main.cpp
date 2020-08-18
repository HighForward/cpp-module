#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> tab(10);

    tab[0] = 1;

    std::cout << tab.size() << std::endl;
}