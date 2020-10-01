#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        ~Fixed();
        Fixed(const Fixed &f);
        Fixed& operator=(const Fixed &f);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

private:
		int value;
		const static int bit = 8;
};

std::ostream &operator<<(std::ostream& stream, const Fixed &f);

#endif