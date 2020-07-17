#include <iostream>

class Fixed
{

public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &f);
        Fixed& operator=(const Fixed &f);
        int getRawBits(void) const;

private:
        int value;
        const static int bit = 8;
};