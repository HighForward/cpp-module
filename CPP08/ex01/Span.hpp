#ifndef MODULE_CPP_Span_HPP
#define MODULE_CPP_Span_HPP

#include <iostream>
#include <exception>
#include <cstdlib>
#include <algorithm>
#include <vector>

class Span
{
	public:
		Span(unsigned int n);
		~Span();
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		void addNumber(int n);
		void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
		void sortTab();
		void printTab();
		int longestSpan();
		int shortestSpan();

		class AlreadyInTab : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("ERROR: number is already stored!");
				}
		};

		class OutOfSpace : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("ERROR: out of space!");
				}
		};

		class BadSizeValue : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("ERROR: signed integer!");
				}
		};

		class ArraySizeTooSmall : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("ERROR: size of array too small!");
				}
		};

	private:
		std::vector<int> array;
		unsigned int size;
};

#endif
