#include "whatever.hpp"

int main()
{
	int a = rand() % 10;
	int b = rand() % 10;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "str1";
	std::string d = "str2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	/*
	std::ifstream file1("main.cpp");
	std::ifstream file2("whatever.hpp");

	if (!file1.is_open() || !file2.is_open()) {
		std::cerr << "Error opening files" << std::endl;
		return 1;
	}
	
	std::stringstream buffer1, buffer2;
	buffer1 << file1.rdbuf();
	buffer2 << file2.rdbuf();

	std::string mn = buffer1.str();
	std::string we = buffer2.str();

	std::cout << "\n\nContent of main.cpp: " << mn.substr(0, 100) << "..." << std::endl;
	std::cout << "\n\nContent of whatever.hpp: " << we.substr(0, 100) << "..." << std::endl;

	std::cout << "\n\nmin(mn, we) = " << ::min(mn, we).substr(0, 100) << "..." << std::endl;
	std::cout << "max(mn, we) = " << ::max(mn, we).substr(0, 100) << "..." << std::endl;

	::swap(mn, we);

	std::cout << "\n\nAfter swap:" << std::endl;
	std::cout << "Content of main.cpp: " << mn.substr(0, 100) << "..." << std::endl;
	std::cout << "\n\nContent of whatever.hpp: " << we.substr(0, 100) << "..." << std::endl;

	file1.close();
	file2.close();
	*/
	return 0;
}