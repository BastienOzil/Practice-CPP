#include "Class.hpp"

MyClass::MyClass(void): num(0)
{
    std::cout << "Consructeur called" << std::endl;
    return;
}

MyClass::~MyClass(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void MyClass::test(void) const
{
    std::cout << "Function 'test' called" << std::endl;
    return;
}