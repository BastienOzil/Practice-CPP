#include "Class.hpp"

MyClass::MyClass(std::string memory) : _memory(memory)
{
	std::cout << "Memory for " << this->_memory << " is allocate" << std::endl;
	return ;
}

MyClass::~MyClass(void)
{
	std::cout << "Memory for " << this->_memory << " is free" << std::endl;
	return ;
}
