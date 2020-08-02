#ifndef CPP_MODULE_IMATERIASOURCE_HPP
#define CPP_MODULE_IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
class IMateriaSource
{
    public:
        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const &type) = 0;
    protected:
        AMateria* materia[4];
        int _nbMateria;
};

#endif
