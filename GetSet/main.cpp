#include "Class.hpp"
#include <iostream>

int	main(void)
{
	MyClass instance;

	instance.setNum(42);
	std::cout << "instance getNum: " << instance.getNum() << std::endl;

	instance.setNum(-42);
	std::cout << "instance getNum: " << instance.getNum() << std::endl;

	return (0);
}