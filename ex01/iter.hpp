#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <fstream>
#include <sstream>


template <typename T>
void iter(T *array, size_t length, void (*f)(T const &))
{
	for (size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename U>
void print(U const &x)
{
	std::cout << x << std::endl;
}

#endif