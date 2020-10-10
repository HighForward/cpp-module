#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>

class NotExistentValue : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("ERROR: not existent value!");
		}
};

template<typename T>
int	easyfind(T array, int n)
{
	typename T::iterator it = find(array.begin(), array.end(), n);

	if (it == array.end())
		throw (NotExistentValue());
	else
		return (*it);
//	for (it = array.begin(); it != array.end(); it++)
//	{
//		if (*it == n)
//		{
//			std::cout << "\033[0m\033[0;35mvalue find!\033[0m\033[1;35m\n";
//			return (*it);
//		}
//	}
//	throw (NotExistentValue());
}

#endif
