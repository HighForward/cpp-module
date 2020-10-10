#ifndef MODULE_CPP_MUTANTSTACK_HPP
#define MODULE_CPP_MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		~MutantStack() {};
		MutantStack(const MutantStack<T> &copy) : std::stack<T>(){ *this = copy; };
		MutantStack &operator=(const MutantStack &copy) { if (this != &copy) { this->c = copy.c; } return (*this); };

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;

		iterator begin()
		{
			return (this->c.begin());
		}

		iterator end()
		{
			return (this->c.end());
		}

		const_iterator begin() const
		{
			return (this->c.begin());
		}

		const_iterator end() const
		{
			return (this->c.end());
		}
};

#endif
