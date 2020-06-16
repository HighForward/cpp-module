#include <string>
#include <iostream>

class Pony
{
    public:
    Pony(std::string name);
    ~Pony();

    private:
    std::string m_name;
};