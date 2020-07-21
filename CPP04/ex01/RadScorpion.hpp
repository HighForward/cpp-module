#ifndef CPP_MODULE_RADSCORPION_HPP
#define CPP_MODULE_RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        ~RadScorpion();
        RadScorpion(const RadScorpion &copy);
        RadScorpion &operator=(const RadScorpion &copy);

};

#endif
