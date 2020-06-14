#include "phonebook.h"

Contact::Contact()
{
    //Constructeur
}

void Contact::print_indexinfos()
{
    std::string field[] = { "first name", "last name", "nickname", "login",
                            "postal address", "email address", "phone number", "birthday date",
                            "favorite meal", "underwear color", "darkest secret"};
    for (int i = 1 ; i < 12 ; i++)
        std::cout << field[i - 1] + ": " + info[i] << std::endl;
}

void Contact::get_infos(std::string temp[12])
{
    for (int i = 0 ; i < 12 ; i ++)
        info[i] = temp[i];
}

void Contact::print_infos()
{
    for (int i = 0 ; i < 4 ; i++)
    {
        std::cout << '|';
        if (info[i].size() <= 10)
        {
            for (int j = info[i].size() ; j < 10 ; j++)
                std::cout << " ";
            std::cout << info[i];
        }
        else
        {
            std::string temp;
            temp = info[i].substr(0, 9);
            std::cout << temp + ".";
        }
    }
    std::cout << "|" << std::endl;
}

Contact::~Contact()
{
    //Destructeur en cas d'allocation dynamique
}