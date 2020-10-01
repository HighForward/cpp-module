#include "Fixed.hpp"
#include <cmath>

int main()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.1234f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << std::endl;

	std::cout << a.toFloat() << std::endl;
	std::cout << b.toFloat() << std::endl;
	std::cout << c.toFloat() << std::endl;
	std::cout << d.toFloat() << std::endl;

	std::cout << std::endl;

	std::cout << "a is " << a.toInt() << " as an integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as an integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as an integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as an integer" << std::endl;
}