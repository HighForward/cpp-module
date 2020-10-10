#include <iostream>

template <typename T> void swap(T& a, T& b)
{
    T x(a);

    a = b;
    b = x;
}

template <typename T> T min(T& a, T& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T> T max(T& a, T& b)
{
    if (a > b)
        return (a);
    return (b);
}

int main()
{
	// INT
	{
		std::cout << "TEST FOR INT" << std::endl;
		int a = 12;
		int b = 45;

		std::cout << a << " : " << b << std::endl;
		::swap<int>(a, b);
		std::cout << a << " : " << b << std::endl;

		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	//STRING
	{
		std::cout << "\nTEST FOR STRING" << std::endl;
		std::string a = "string 1";
		std::string b = "string 2";

		std::cout << a << " : " << b << std::endl;
		::swap<std::string>(a, b);
		std::cout << a << " : " << b << std::endl;

		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	//CHAR
	{
		std::cout << "\nTEST FOR CHAR" << std::endl;
		char a = 'a';
		char b = 'z';

		std::cout << a << " : " << b << std::endl;
		::swap<char>(a, b);
		std::cout << a << " : " << b << std::endl;

		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
}