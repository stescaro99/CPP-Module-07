#ifndef WATHAVER_HPP
#define WATHAVER_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename U>
U min(U a, U b)
{
	if (a < b)
		return a;
	return b;
}

template <typename V>
V max(V a, V b)
{
	if (a > b)
		return a;
	return b;
}

#endif