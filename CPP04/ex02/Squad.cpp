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
    squad = NULL;
}

Squad::Squad(const ISquad &copy)
{
    int x = 0;
    squad = new ISpaceMarine*[copy.getCount() + 1];

    while (x < copy.getCount())
    {
        squad[x] = copy.getUnit(x)->clone();
        x++;
    }
//    *this = copy;
}

Squad &Squad::operator=(const ISquad &copy)
{
    if (this != &copy)
    {
        if (this->getCount() > 0)
        {
            for (int i = 0; i < this->getCount(); i++)
                delete squad[i];
            delete squad;
        }
        squad = new ISpaceMarine*[copy.getCount() + 1];
        for (int x = 0; x < copy.getCount(); x++)
            squad[x] = copy.getUnit(x)->clone();
        squad[copy.getCount()] = NULL;
    }
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