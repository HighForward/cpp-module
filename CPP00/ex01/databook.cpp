#include "phonebook.h"


void handle_stdin(Contact& contact, int i)
{
    std::string temp[11];

    std::cout << "Enter your First Name" << std::endl;
    std::getline(std::cin, temp[0]);
    std::cout << "Enter your Last Name" << std::endl;
    std::getline(std::cin, temp[1]);
    std::cout << "Enter your Nickname" << std::endl;
    std::getline(std::cin, temp[2]);
    std::cout << "Enter your Login" << std::endl;
    std::getline(std::cin, temp[3]);
    std::cout << "Enter your Postal Address" << std::endl;
    std::getline(std::cin, temp[4]);
    std::cout << "Enter your Email Address" << std::endl;
    std::getline(std::cin, temp[5]);
    std::cout << "Enter your Phone Number" << std::endl;
    std::getline(std::cin, temp[6]);
    std::cout << "Enter your Birthday Date" << std::endl;
    std::getline(std::cin, temp[7]);
    std::cout << "Enter your Favorite Meal" << std::endl;
    std::getline(std::cin, temp[8]);
    std::cout << "Enter your Underwear Color" << std::endl;
    std::getline(std::cin, temp[9]);
    std::cout << "Enter your Darkest Secret" << std::endl;
    std::getline(std::cin, temp[10]);
    if (i > 7)
    {
        std::cout << "Out of memory : Book full" << std::endl;
        return ;
    }
    else
        std::cout << "Well ! Data saved." << std::endl;
    contact.get_infos(temp);
    return ;
}
