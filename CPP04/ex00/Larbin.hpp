#ifndef MODULE_CPP_LARBIN_HPP
#define MODULE_CPP_LARBIN_HPP

#include <iostream>
#include "Victim.hpp"

class Larbin : public Victim
{
	public:
		Larbin(std::string name);
		~Larbin();
		Larbin(const Larbin &copy);
		Larbin &operator=(const Larbin &copy);
		virtual void getPolymorphed() const;

};

#endif
