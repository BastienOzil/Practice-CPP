#include "Class.hpp"

MyClass::MyClass(float const f): pi(f), num(42)
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
    std::cout << "This->pi: " << this->pi << std::endl;
    std::cout << "This->num :" << this->num << std::endl;
    return;
}