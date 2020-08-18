#ifndef MODULE_CPP_ARRAY_HPP
#define MODULE_CPP_ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        unsigned int size();
        T& operator[](int n);
    private:
        T* array;
        unsigned int _size;

};

template<typename T>
Array<T>::Array()
{
    std::cout << "without parameters" << std::endl;
    array = new T[0];
    _size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    std::cout << "unsigned int" << std::endl;
    array = new T[n];
    _size = n;
}

template<typename T>
unsigned int Array<T>::size()
{
    return (_size);
}

template<typename T>
T &Array<T>::operator[](int n)
{
    std::cout << "yo" << std::endl;
//    return ();
}

#endif
