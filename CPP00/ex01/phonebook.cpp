#include "phonebook.h"

int main(void)
{
    Contact contact[8];
    std::string cmd;
    int i = 0;

    std::cout << "Welcome to the worst phone book ever !" << std::endl;

    while (cmd != "EXIT")
    {
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
        {
            handle_stdin(contact[i], i);
            i++;
        }
        else if (cmd == "SEARCH")
        {
            contact[0].print_infos();
            contact[1].print_infos();
        }
        else
            std::cout << "\r";
    }
    return (0);
}