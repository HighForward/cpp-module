#include "Squad.hpp"

Squad::Squad()
{
    squad = new ISpaceMarine*[1];
    squad[0] = NULL;
}

Squad::~Squad()
{
    for (int x = 0; x < getCount(); x++)
        delete squad[x];
    delete[] squad;
}

Squad::Squad(const Squad &copy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

Squad &Squad::operator=(const Squad &copy)
{
    std::cout << "Assignation operator" << std::endl;
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}

int Squad::getCount() const
{
    int x = 0;

    while (squad && squad[x])
        x++;
    return (x);
}

ISpaceMarine* Squad::getUnit(int n) const
{
    if (squad && n <= getCount() && squad[n])
        return (squad[n]);
    else
        return (NULL);
}

int Squad::push(ISpaceMarine *push)
{
    ISpaceMarine** tab;

    for (int i = 0; i < getCount(); i++)
    {
        if (squad[i] == push)
        {
            std::cout << "Aleady in the Squad !" << std::endl;
            return (0);
        }
    }
    tab = new ISpaceMarine*[getCount() + 2];
    for (int x = 0; x < getCount(); x++)
        tab[x] = squad[x];
    tab[getCount()] = push;
    tab[getCount() + 1] = NULL;
    delete[] squad;
    squad = tab;
    return (1);
}