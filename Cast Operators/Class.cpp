#include "Class.hpp"

MyClass::MyClass(float const n) : _n(n)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

MyClass::~MyClass(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

float MyClass::get_n(void)
{
	return (this->_n);
}