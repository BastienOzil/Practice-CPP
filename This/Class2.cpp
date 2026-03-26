#include "Class2.hpp"

MyClass2::MyClass2(char p1, int p2, float p3) : chr(p1), num(p2), flt(p3)
{
	std::cout << "Consructeur called" << std::endl;
	std::cout << "this->chr: " << this->chr << std::endl;
	std::cout << "this->num: " << this->num << std::endl;
	std::cout << "this->flt: " << this->flt << std::endl;
	return ;
}

MyClass2::~MyClass2(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
