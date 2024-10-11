#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
    Array<char> empty(0);
    std::cout << "empty size: " << empty.size() << std::endl;
    Array<int> numbers(100);
    std::cout << "numbers size: " << numbers.size() << std::endl;
    int* mirror = new int[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    /*
    Array<int> tmp;
    tmp = numbers;
    Array<int> test(tmp);
    */
    for (int i = 0; i < 100; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[100] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < 100; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}