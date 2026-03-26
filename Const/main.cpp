#include "Class.hpp"
#include <iostream>

int	main(void)
{
	MyClass instance(3.14f);

	instance.test(); // ou this->test dans le constructeur

	return (0);
}