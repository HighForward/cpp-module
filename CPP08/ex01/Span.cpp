#include "Span.hpp"

Span::Span(unsigned int n)
{
	if ((int)n < 0)
		throw (Span::BadSizeValue());
	this->size = n;
}

Span::~Span()
{

}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		this->array = copy.array;
		this->size = copy.size;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (array.size() >= size)
		throw (Span::OutOfSpace());
	std::vector<int>::iterator it;

	for (it = array.begin(); it < array.end(); it++)
	{
		if (n == *it)
			throw (Span::AlreadyInTab());
	}
	array.push_back(n);

}

int Span::longestSpan()
{
	if (array.size() < 2)
		throw (Span::ArraySizeTooSmall());
	int min = *std::min_element(array.begin(), array.end());
	int max = *std::max_element(array.begin(), array.end());
	return (max - min);
}

void Span::sortTab()
{
	std::sort(array.begin(), array.end());
}

void Span::printTab()
{
	std::vector<int>::iterator it;
	std::cout << "\033[1;34mvalues in array:\033[0;34m\n";
	for (it = array.begin(); it < array.end(); it++)
		std::cout << *it << " ";
	std::cout << "\033[0m" << std::endl;
}

int Span::shortestSpan()
{
	if (array.size() < 2)
		throw (Span::ArraySizeTooSmall());

	Span::sortTab();
	std::vector<int>::iterator it;

	int shortest = std::abs((int)(*(array.begin()) - (*(array.begin() + 1))));

	for (it = array.begin(); it < array.end() - 1; it++)
	{
		if (shortest > std::abs((int)(*(it) - (*(it + 1)))))
			shortest = std::abs((int)(*(it) - (*(it + 1))));
	}
	return (shortest);
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	while (first < last)
	{
		array.push_back(*first);
		first++;
	}
}
