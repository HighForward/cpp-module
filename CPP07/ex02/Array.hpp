#ifndef MODULE_CPP_ARRAY_HPP
#define MODULE_CPP_ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
    public:
        Array<T>();
        ~Array();
        Array<T>(unsigned int n);
		Array<T>(const Array &copy);
		Array<T> &operator=(const Array &copy);
        unsigned int size();
        T& operator[](int n);

	class OutOfBound : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("ERROR: out of bound!");

			}
	};

    private:
        T* array;
        unsigned int _size;

};

template<typename T>
Array<T>::Array()
{
    array = NULL;
    _size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    array = new T[n];
    _size = n;
}

template<typename T>
Array<T>::~Array()
{
	if (array != NULL)
		delete[] array;
}

template<typename T>
Array<T>::Array(const Array &copy)
{
	if (copy._size != 0)
	{
		this->array = new T[copy._size];
		this->_size = copy._size;
		for (size_t i = 0; i < copy._size; i++)
		{
			this->array[i] = copy.array[i];
		}
	}
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
	if (this != &copy)
	{
		if (this->_size != 0)
			delete[] this->array;
		if (copy._size != 0)
		{
			this->array = new T[copy._size];
			this->_size = copy._size;
			for (size_t i = 0; i < copy._size; i++)
			{
				this->array[i] = copy.array[i];
			}
		}
	}
	return (*this);
}


template<typename T>
unsigned int Array<T>::size()
{
    return (_size);
}

template<typename T>
T &Array<T>::operator[](int n)
{
	if (n < 0 || (size_t)n >= this->size() || this->size() == 0)
		throw (Array<T>::OutOfBound());
    return (array[n]);
}

#endif
