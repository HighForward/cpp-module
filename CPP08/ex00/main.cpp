#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
	//VECTOR
	try
	{
		std::cout << "\033[032m" << "-- VECTOR --" << "\033[0m" << std::endl;
		std::vector<int> tab(2, 0);
		std::vector<int>::iterator it;

		it = tab.begin();
		it = tab.insert(it, 200);
		it = tab.insert(it, 300);
		it = tab.insert(it, 400);
		it = tab.insert(it, 500);
		it = tab.insert(it, 600);
		tab.insert(it, 800);
		for (it = tab.begin(); it != tab.end(); it++)
			std::cout << *it << std::endl;
		std::cout << std::endl;
		std::cout << easyfind<std::vector<int> >(tab, 500) << "\033[0m" << std::endl;
		std::cout << easyfind<std::vector<int> >(tab, 12) << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
	std::cout << std::endl;
	//STACK
	try
	{
		std::cout << "\033[032m" << "-- STACK --" << "\033[0m" << std::endl;
		std::list<int> tab(2, 0);
		std::list<int>::iterator it;
		it = tab.begin();
		it = tab.insert(it, 200);
		it = tab.insert(it, 300);
		it = tab.insert(it, 400);
		it = tab.insert(it, 500);
		it = tab.insert(it, 600);
		for (it = tab.begin(); it != tab.end(); it++)
			std::cout << *it << std::endl;
		std::cout << std::endl;
		std::cout << easyfind<std::list<int> >(tab, 500) << "\033[0m" << std::endl;
		std::cout << easyfind<std::list<int> >(tab, 12) << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
	std::cout << std::endl;
	//DEQUE
	try
	{
		std::cout << "\033[032m" << "-- DEQUE --" << "\033[0m" << std::endl;
		std::deque<int> tab;
		std::deque<int>::iterator it;

		it = tab.begin();
		it = tab.insert(it, 200);
		it = tab.insert(it, 300);
		it = tab.insert(it, 400);
		it = tab.insert(it, 500);
		it = tab.insert(it, 600);
		for (it = tab.begin(); it != tab.end(); it++)
			std::cout << *it << std::endl;
		std::cout << std::endl;
		std::cout << easyfind<std::deque<int> >(tab, 500) << "\033[0m" << std::endl;
		std::cout << easyfind<std::deque<int> >(tab, 12) << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
}