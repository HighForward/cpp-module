#include "phonebook.h"

int main(void)
{
    Contact contact[8];
    std::string cmd = "";
    int i = 0;

    std::cout << "Welcome to the worst phone book ever !" << std::endl;

    while (cmd != "EXIT")
    {
        std::cout << "> ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
        {
            handle_stdin(contact[i], i);
            i++;
        }
        if (cmd == "SEARCH")
        {
            print_book(contact, i);
            print_indexbook(contact, i);
        }
    }
    std::cout << "Good bye !" << std::endl;
    return (0);
}