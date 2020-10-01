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
	return ((float)(value) / (1 << bit));
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
Fixed& Fixed::operator = (const Fixed &f)
{
    if (this != &f)
    {
        value = f.getRawBits();
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &f)
{
	stream << f.getRawBits();
	return (stream);
}