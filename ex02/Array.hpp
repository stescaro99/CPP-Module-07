#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int _size;

	public:

		Array()
		{
			this->array = NULL;
			this->_size = 0;
			std::cout << "Array default constructor" << std::endl;
		}

		Array(unsigned int n)
		{
			this->array = new T[n];
			this->_size = n;
			std::cout << "Array constructor" << std::endl;
		}

		Array(const Array &cpy)
		{
			this->array = new T[cpy._size];
			this->_size = cpy._size;
			std::cout << "Array copy constructor" << std::endl;
			for (unsigned int i = 0; i < _size; i++)
				array[i] = cpy.array[i];
		}

		~Array()
		{
			std::cout << "Array default destructor" << std::endl;
			delete [] array;
		}

		Array &operator=(const Array &arr)
		{
			if (this == &arr)
				return *this;
			delete [] array;
			this->array = new T[arr.size()];
			this->_size = arr._size;
			std::cout << "Array copy operator" << std::endl;
			for (unsigned int i = 0; i < size(); i++)
				array[i] = arr.array[i];
			return *this;
		}

		T &operator[](unsigned int i)
		{
			if (i >= _size)
				throw OutOfLimits();
			return array[i];
		}

		unsigned int size() const
		{
			return _size;
		}

		class OutOfLimits : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Index out of limits";
				}
		};
};

#endif
