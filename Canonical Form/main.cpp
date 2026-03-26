#include "Class.hpp"
#include <iostream>

int	main(void)
{
	MyClass	instance1;
	MyClass instance2(42);
	MyClass instance3(instance1);

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;
    
	instance3 = instance2;
	std::cout << instance3 << std::endl;
	return (0);
}
