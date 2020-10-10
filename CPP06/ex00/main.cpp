#include <iostream>
#include <iomanip>
#include <math.h>
#include <climits>

void getValueForChar(double d)
{
    std::cout << "char: ";
    if (d < 33 || d > 126)
        std::cout << "Non displayable\n";
    else if (isnan(d) || isinf(d))
        std::cout << "impossible\n";
    else
        std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
}

void getValueForInt(double d)
{
    std::cout << "int: ";
    if (isnan(d) || isinf(d) || d < INT_MIN || d > INT_MAX)
        std::cout << "impossible\n";
    else
        std::cout << static_cast<int>(d) << std::endl;
}

void getValueForFloat(double d, int precision)
{
	(void)precision;
    std::cout << "float: " << std::setprecision(precision)  << std::fixed << static_cast<float>(d) << "f" << std::endl;
}

void getValueForDouble(double d, int precision)
{
	(void)precision;
	std::cout << "double: " << std::setprecision(precision) << std::fixed << d << std::endl;
}

int getPrecision(char *value)
{
    int i = 0;
    int j = 0;

    while (value[i] && value[i] != '.')
        i++;
    if (value[i] == '.')
        i++;
    while (value[i + j] >= 48 && value[i + j] <= 57)
        j++;
    return ((j == 0 ? 1 : j));
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);

    int precision = getPrecision(argv[1]);
    double d = atof(argv[1]);

    getValueForChar(d);
    getValueForInt(d);
    getValueForFloat(d, precision);
    getValueForDouble(d, precision);
}