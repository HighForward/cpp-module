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

        std::string const &getType() const;
        int getHP() const;
        virtual void takeDamage(int value);
        bool isAlive(void);

	private:
        int _hp;
        std::string _type;
        bool alive;

};

#endif
