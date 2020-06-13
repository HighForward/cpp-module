#include "phonebook.h"

Contact::Contact()
{
    //Constructeur
}

void Contact::get_infos(std::string temp[11])
{
    for (int i = 0 ; i < 11 ; i ++)
        info[i] = temp[i];
}

void Contact::print_infos()
{
    for (int i = 0 ; i < 11 ; i++)
        std::cout << info[i] << std::endl;
}

Contact::~Contact()
{
    //Destructeur en cas d'allocation dynamique
}