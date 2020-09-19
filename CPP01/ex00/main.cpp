#include "Pony.hpp"
#include <iostream>
#include <string>

void ponyOnTheStack()
{
    std::cout << "PonyOnTheStack :" << std::endl;
    Pony *ponyStack;

    ponyStack = new Pony("Poney_sur_la_pile");
    delete ponyStack;
}

void ponyOnTheHeap()
{
    std::cout << "PonyOnTheHeap" << std::endl;
    Pony ponyHeap("Poney_sur_le_tas");
}

int main()
{
    ponyOnTheStack();
    std::cout << std::endl;
    ponyOnTheHeap();

    std::cout << "PonyOnTheStack and PonyOnTheHeap were deleted" << std::endl;
}