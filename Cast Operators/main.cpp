#include "Class.hpp"
#include <iostream>

int	main(void)
{
	MyClass a(42.042f); // variable
	float b = a;        // Implicit cast operator to float
	int c = a;          // Implicit cast operator to int

	std::cout << "a: " << a.get_n() << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	return (0);
}