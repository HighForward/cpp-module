#include <iostream>

template<typename  T> void makedusalace(T const &n)
{
    std::cout << n << std::endl;
}

template <typename T> void iter(T *a, int size, void (*fptr)(T const&))
{
    std::cout << "\033[0;32mFunction Instance\033[0m" << std::endl;
    for (int x = 0; x < size; ++x)
        fptr(a[x]);
}

template <typename T> void iter(T *a, int size)
{
    std::cout << "\033[0;31mNo Function Instance\033[0m" << std::endl;
    for (int x = 0; x < size; ++x)
        std::cout << a[x] << std::endl;
}

int main()
{
	//STRING
	{
		std::cout << "\033[1;34m-- TEST FOR STRING --\033[0m" << std::endl;
		std::string tab[] = {"salut", "les", "amis", "c'est", "Diablox9"};
		iter<std::string>(tab, 5, &makedusalace);
		std::cout << std::endl;
		iter<std::string>(tab, 5);
		std::cout << std::endl;
	}
	//INT
	{
		std::cout << "\033[1;34m-- TEST FOR INT --\033[0m" << std::endl;
		int tab[] = {1, 2, 3, 4 ,5};

		iter<int>(tab, 5, &makedusalace);
		std::cout << std::endl;
		iter<int>(tab, 5);
		std::cout << std::endl;
	}
	//CHAR
	{
		std::cout << "\033[1;34m-- TEST FOR CHAR --\033[0m" << std::endl;
		char tab[] = {'a', 'b', 'c', 'd', 'e'};

		iter<char>(tab, 5, makedusalace);
		std::cout << std::endl;
		iter<char>(tab, 5);
	}
}