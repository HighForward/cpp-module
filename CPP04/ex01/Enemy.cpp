#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{

}

Enemy::~Enemy()
{

}

Enemy::Enemy(const Enemy &copy)
{
    *this = copy;
}

Enemy &Enemy::operator=(const Enemy &copy)
{
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}

std::string Enemy::getType() const
{
    return (_type);
}

int Enemy::getHP() const
{
    return (_hp);
}

void Enemy::takeDamage(int value)
{
    _hp = _hp - value;
}