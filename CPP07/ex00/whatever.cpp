#include <iostream>

template <typename T> void swap(T& a, T& b)
{
    T x;

    x = a;
    a = b;
    b = x;
}

template <typename T> T min(T& a, T& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T> T max(T& a, T& b)
{
    if (a > b)
        return (a);
    return (b);
}

int main()
{
    int a = 12;
    int b = 45;

    swap<int>(a, b);
    std::cout << a << " : " << b << std::endl;

    int ret1 = min<int>(a, b);
    std::cout << ret1 << std::endl;

    int ret2 = max<int>(a, b);
    std::cout << ret2 << std::endl;

    ::swap(a, b);

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(a, b) = " << ::min(c, d) << std::endl;
    std::cout << "max(a, b) = " << ::max(c, d) << std::endl;
}