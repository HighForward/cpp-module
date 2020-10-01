#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int n)
{
	value = n << bit;
}

Fixed::Fixed(const float n)
{
	value = roundf(n * (1 << bit));
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
}

float Fixed::toFloat(void) const
{
	return ((float)(value) / (float)(1 << bit));
}

int Fixed::toInt(void) const
{
	return (value >> bit);
}

int Fixed::getRawBits(void) const
{
	return (value);
}

void Fixed::setRawBits(const int raw)
{
	value = raw;
}
Fixed& Fixed::operator=(const Fixed &f)
{
    if (this != &f)
    {
		value = f.getRawBits();
	}
    return (*this);
}

bool Fixed::operator>(const Fixed &f) const
{
	if (this->getRawBits() > f.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<(const Fixed &f) const
{
	if (this->getRawBits() < f.getRawBits())
		return true;
	else
		return false;
}
bool Fixed::operator>=(const Fixed &f) const
{
	if (this->getRawBits() >= f.getRawBits())
		return true;
	else
		return false;
}
bool Fixed::operator<=(const Fixed &f) const
{
	if (this->getRawBits() <= f.getRawBits())
		return true;
	else
		return false;
}
bool Fixed::operator==(const Fixed &f) const
{
	if (this->getRawBits() == f.getRawBits())
		return true;
	else
		return false;
}
bool Fixed::operator!=(const Fixed &f) const
{
	if (this->getRawBits() != f.getRawBits())
		return true;
	else
		return false;
}
Fixed Fixed::operator-(const Fixed &f) const
{
	Fixed ret(this->toFloat() - f.toFloat());
	return (ret);
}
Fixed Fixed::operator+(const Fixed &f) const
{
	Fixed ret(this->toFloat() + f.toFloat());
	return (ret);
}
Fixed Fixed::operator*(const Fixed &f) const
{
	Fixed ret(this->toFloat() * f.toFloat());
	return (ret);
}
Fixed Fixed::operator/(const Fixed &f) const
{
	Fixed ret(this->toFloat() / f.toFloat());
	return (ret);
}
Fixed &Fixed::operator++(void)
{
	this->value += 1;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++this->value;
	return (temp);
}
Fixed &Fixed::operator--(void)
{
	this->value -= 1;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--this->value;
	return (temp);
}

const Fixed& Fixed::min(const Fixed &x, const Fixed &y)
{
	if (x <= y)
		return (x);
	else
		return (y);
}

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
	if (x <= y)
		return (x);
	else
		return (y);
}

const Fixed	&Fixed::max(const Fixed &x, const Fixed &y)
{
	if (x >= y)
		return (x);
	else
		return (y);
}

Fixed &Fixed::max(Fixed &x, Fixed &y)
{
	if (x >= y)
		return (x);
	else
		return (y);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &f)
{
	stream << f.toFloat();
	return (stream);
}

