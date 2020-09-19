#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
    public:
    Pony(std::string name);
    ~Pony();

    private:
    std::string m_name;
    static const int leg = 4;
};

#endif