#include "Pony.hpp"
#include <iostream>
#include <string>

void ponyOnTheStack()
{
    std::cout << "PonyOnTheStack :" << std::endl;
    Pony *ponyStack;

    ponyStack = new Pony("Rocinante");
    delete ponyStack;
}

void ponyOnTheHeap()
{
    std::cout << "PonyOnTheHeap" << std::endl;
    Pony ponyHeap("Petit tonnere");
}

int main()
{
    ponyOnTheStack();
    std::cout << std::endl;
    ponyOnTheHeap();
}