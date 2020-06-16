#include "phonebook.h"

void print_book(Contact contact[8], int x)
{
    int tabsize = 45;
    x = x > 8 ? 8 : x;
    for (int i = 0 ; i < tabsize ; i++)
        std::cout << '#';
    std::cout << std::endl;
    if (x != 0)
    {
        for (int i = 0 ; i < x ; i++)
            contact[i].print_infos();
    }
    else
    {
        for (int i = 0 ; i < 40 ; i++)
            i == 20 ? std::cout << "EMPTY" : std::cout << " ";
        std::cout << std::endl;
    }
    for (int i = 0 ; i < tabsize ; i++)
        std::cout << '#';
    std::cout << std::endl;
}

void print_indexbook(Contact contact[8], int x)
{
    std::string nb;
    int index = 0;

    std::cout << "Select index to get more informations" << std::endl;
    std::getline(std::cin, nb);

    if (nb.size() > 0)
    {
        for (size_t i = 0; i < nb.size(); i++)
            index = index * 10 + (nb[i] - 48);
        if (index < 0 || index > 7 || index >= x || x == 0)
            std::cout << "Sorry, this index do not exists" << std::endl;
        else
            contact[index].print_indexinfos();
    }
}

void handle_stdin(Contact& contact, int i)
{
    std::string temp[12];
    std::string field[] = { "first name", "last name", "nickname", "login",
                            "postal address", "email address", "phone number", "birthday date",
                            "favorite meal", "underwear color", "darkest secret"};
    temp[0] = std::to_string(i);

    for (int x = 1 ; x < 12 ; x++)
    {
        std::cout << "Enter your " + field[x - 1] + ":" << std::endl;
        std::getline(std::cin, temp[x]);
    }
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
