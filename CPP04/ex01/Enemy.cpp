#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type), alive(true)
{

}

Enemy::~Enemy()
{
	alive = false;
}

Enemy::Enemy(const Enemy &copy)
{
    *this = copy;
}

Enemy &Enemy::operator=(const Enemy &copy)
{
    if (this != &copy)
    {
		this->_hp = copy._hp;
		this->_type = copy._type;
    }
    return (*this);
}

std::string const &Enemy::getType() const
{
    return (_type);
}

int Enemy::getHP() const
{
	if (alive)
    	return (_hp);
	return (0);
}

void Enemy::takeDamage(int value)
{
	if (value >= 0)
    	_hp = _hp - value <= 0 ? 0: _hp - value;
}
bool Enemy::isAlive(void)
{
	return (alive);
}
