#include <iostream>
#include "Array.hpp"

class test
{
	public:
		test() {};
};

int main()
{
	try
	{
		Array<int> tab(12);
		Array<int> array(12);

		tab[11] = 12;
		array[11] = 11;
		std::cout << tab[11] << std::endl;
		std::cout << array[11] << std::endl;
		tab = array;
		std::cout << tab[11] << std::endl;
		std::cout << array[11] << std::endl;
		tab[11] = 42;
		std::cout << tab[11] << std::endl;
		std::cout << array[11] << std::endl;
		array[11] = 24;
		std::cout << tab[11] << std::endl;
		std::cout << array[11] << std::endl;
		std::cout << tab[0] << std::endl;
		std::cout << array[0] << std::endl;
		array[15] = 0;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Array<std::string> tab(15);
		tab[0] = "yo";
		tab[1] = "ya";
		tab[2] = "ye";
		std::cout << tab[0] << std::endl;
		std::cout << tab[1] << std::endl;
		std::cout << tab[2] << std::endl;
		std::cout << tab[11] << std::endl;
		std::cout << tab[20] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		test damn;
		Array<test> tab(15);
		tab[0] = damn;
		tab[16] = damn;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


}