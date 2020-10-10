#include "Span.hpp"
#include <iostream>
#include <stdlib.h>

int RandomNumber () { return (std::rand() % 10000); }

int main()
{
	//NORMAL TEST
	try
	{
		std::cout << "\033[1;31m-- NORMAL TEST --\033[0m\n\n";
		Span span(15);

		span.addNumber(42);
		span.addNumber(9);
		span.addNumber(5);
		span.addNumber(18);
		span.addNumber(20);
		span.addNumber(78);
		span.addNumber(85);
		span.addNumber(27);
		span.printTab();

		std::cout << "\033[1;33mLongest Span:\033[0m\033[0;33m " << span.longestSpan() << "\033[0m" << std::endl;
		std::cout << "\033[1;33mShortest Span:\033[0m\033[0;33m " << span.shortestSpan() << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//BIG ARRAY TEST
	try
	{
		srand(time(NULL));
		std::cout << "\n\033[1;31m-- BIG ARRAY TEST --\033[0m\n\n";

		Span span(1000);
		std::vector<int> big(1000);
		std::generate(big.begin(), big.end(), RandomNumber);
		span.addNumber(big.begin(), big.end());

		std::cout << "\033[1;33mLongest Span:\033[0m\033[0;33m " << span.longestSpan() << "\033[0m" << std::endl;
		std::cout << "\033[1;33mShortest Span:\033[0m\033[0;33m " << span.shortestSpan() << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//ERROR TEST
	try
	{
		std::cout << "\n\033[1;31m-- ERROR TEST --\033[0m\n\n";

		Span span(3);
		span.addNumber(1);
		span.addNumber(2);
		span.addNumber(3);
		span.addNumber(4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n\033[1;31m-- ERROR TEST --\033[0m\n\n";

		Span span(2);
		span.addNumber(42);
		span.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}