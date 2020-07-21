#ifndef CPP_MODULE_ENEMY_HPP
#define CPP_MODULE_ENEMY_HPP

#include <iostream>

class Enemy
{
    public:
        Enemy(int hp, std::string const &type);
        virtual ~Enemy();
        Enemy(const Enemy &copy);
        Enemy &operator=(const Enemy &copy);
        std::string getType() const;
        int getHP() const;
        virtual void takeDamage(int value);

    protected:
        int _hp;
        std::string _type;

};

#endif
