#include "Class.hpp"
#include <iostream>

int	main(void)
{
	int value = 42;
	int *value_Ptr = &value; // le ptr pointe la ref
	int &value_Ref = value;  // la ref se met a pointer la variable

	std::cout << value << std::endl;
	std::cout << *value_Ptr << std::endl; // si * absent, donne l'adresse
	std::cout << value_Ref << std::endl;  // si & present, donne l'adresse

	std::cout << std::endl;

	MyClass instance;

	std::string str = "Here an exemple for ptr:";
	std::cout << str << std::endl;

	instance.test_Ptr(&str);
	instance.test_ConstPtr(&str);
	std::cout << std::endl;
	// un ptr peut pointer sur void
	// si une variable disparait ou est changeante: utiliser un ptr
	str = "And for ref:";
	std::cout << str << std::endl;
	instance.test_Ref(str);
	instance.test_ConstRef(str);
	// une ref doit toujours etre present quelque part
	// si une variable est existante et ne change pas, utiliser la ref
	return (0);
}