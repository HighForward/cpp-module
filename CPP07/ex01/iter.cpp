#include <iostream>

template<typename  T> void makedusalace(T n)
{
    std::cout << n << std::endl;
}

template <typename T> void iter(T *a, int size, void (*fptr)(T))
{
    std::cout << "With function instance" << std::endl;
    for (int x = 0; x < size; ++x)
    {
        fptr(a[x]);
    }
}

template <typename T> void iter(T *a, int size)
{
    std::cout << "Without function instance" << std::endl;
    for (int x = 0; x < size; ++x)
    {
        std::cout << a[x] << std::endl;
    }
}

int main()
{
    std::string tab[] = { "salut", "les", "amis", "ahah", "what" };
    int i[] = {1, 2 ,3 ,4, 5};
    iter(tab, 5, &makedusalace);
    iter(tab, 5);

    int *a = new int();
    std::cout << *a << std::endl;
}