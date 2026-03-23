#include "Class.hpp"

MyClass::MyClass(void)
{
    std::cout << "Consructeur called" << std::endl;

    this->cpp = 42;
    std::cout << "this->cpp: " << this->cpp << std::endl;
    this->test();
    return;
}

MyClass::~MyClass(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void MyClass::test(void)
{
    std::cout << "Function 'test' called" << std::endl;
    return;
}