#include <iostream>
#include <cstdlib>

typedef struct  Data
{
    std::string s1;
    int n;
    std::string s2;
}               Data;

size_t randomize(size_t max, size_t min)
{
    size_t rand_nb = rand() % (max - min + 1) + min;
    return (rand_nb);
}

std::string randomize_name()
{
    std::string name = "";

    for (int x = 0; x < 8; x++)
        name += randomize(24, 0) + (x == 0 ? + 65 : + 97);
    return (name);
}

void *serialize(void)
{
    Data *data = new Data;
    data->s1 = randomize_name();
    data->n = rand() % 1000;
    data->s2 = randomize_name();

    return (data);
}

Data *deserialize(void *raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
	srand(time(NULL));
    void *ptr = static_cast<void*>(serialize());

    std::cout << ptr << std::endl;

    Data *deserialized = deserialize(ptr);

    std::cout << deserialized->s1 << std::endl;
    std::cout << deserialized->n << std::endl;
    std::cout << deserialized->s2 << std::endl;

    delete deserialized;
}