#include <iostream>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mutant;

	mutant.push(12);
	mutant.push(17);

	std::cout << mutant.top() << std::endl;

	mutant.pop();

	std::cout << mutant.size() << std::endl;

	mutant.push(9);
	mutant.push(5);
	mutant.push(797);
	mutant.push(42);

	MutantStack<int>::iterator it = mutant.begin();
	MutantStack<int>::iterator ite = mutant.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}


	std::stack<int> s(mutant);

	std::cout << mutant.top() << std::endl;
	std::cout << s.top() << std::endl;

	const MutantStack<int> copy(mutant);
	std::cout << copy.top() << std::endl;

//	std::cout << std::endl;
//	MutantStack<int>::const_iterator cit = mutant.begin();
//	MutantStack<int>::const_iterator cite = mutant.end();

//	*cit = *cite;
}