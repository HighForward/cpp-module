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
        Fixed(const Fixed &f);
		Fixed& operator=(const Fixed &f);

		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		//comparaison
		bool operator>(const Fixed& f) const;
		bool operator<(const Fixed& f) const;
		bool operator>=(const Fixed& f) const;
		bool operator<=(const Fixed& f) const;
		bool operator==(const Fixed& f) const;
		bool operator!=(const Fixed& f) const;

		//operateur
		Fixed operator+(const Fixed& f) const;
		Fixed operator-(const Fixed& f) const;
		Fixed operator*(const Fixed& f) const;
		Fixed operator/(const Fixed& f) const;

		//increment
		Fixed &operator++(void); //define prefix increment operator
		Fixed operator++(int); //define postfix increment operator
		Fixed &operator--(void); //define prefix increment operator
		Fixed operator--(int); //define postfix increment operator

		//static declaration = non member, appartient à la class
		static const Fixed& min(const Fixed &x, const Fixed &y);
		static Fixed& min(Fixed &x, Fixed &y);
		static const Fixed& max(const Fixed &x, const Fixed &y);
		static Fixed& max(Fixed &x, Fixed &y);

private:
		int value;
		const static int bit = 8;
};

const Fixed&	min(const Fixed &x, const Fixed &y);
const Fixed&	max(const Fixed &x, const Fixed &y);
std::ostream&	operator<<(std::ostream& stream, const Fixed &f);

#endif