#include "Class.hpp"
#include <iostream>

int	main(void)
{
	MyClass instance = MyClass("Normal");
	MyClass *instance_P = new MyClass("New");

	delete instance_P;

	return (0);
}