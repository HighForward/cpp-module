#ifndef CPP_MODULE_MATERIASOURCE_HPP
#define CPP_MODULE_MATERIASOURCE_HPP

#include <iostream>
#include <string.h>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &copy);
        MateriaSource &operator=(const MateriaSource &copy);
        virtual void learnMateria(AMateria* tolearn);
        virtual AMateria* createMateria(std::string const &type);

};

#endif
