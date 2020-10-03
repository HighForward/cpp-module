#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    _nbMateria = 0;
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int x = 0; x < 4; x++)
    {
        if (materia[x] != NULL)
            delete (materia[x]);
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {

    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* tolearn)
{
    if (_nbMateria < 4)
    {
        materia[_nbMateria] = tolearn;
        _nbMateria++;
    }
    else
    {
        std::cout << "Source have already 4 Materia" << std::endl;
        delete (tolearn);
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int x = 0; x < 4; x++)
    {
        if (materia[x] && strcmp(materia[x]->getType().c_str(), type.c_str()) == 0)
            return (materia[x]->clone());
    }
	return (NULL);
}