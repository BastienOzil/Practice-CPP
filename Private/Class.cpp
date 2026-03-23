#include "Class.hpp"

MyClass::MyClass(void)
{
    std::cout << "Consructeur called" << std::endl;

    this->publicNum = 0;
    std::cout << "this->publicNum: " << this->publicNum << std::endl;
    this->_privateNum = 0;
    std::cout << "this->_privateNum: " << this->_privateNum << std::endl;

    this->publicTest();
    this->_privateTest();
    return;
}

MyClass::~MyClass(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void MyClass::publicTest(void) const
{
    std::cout << "Public function called" << std::endl;
    return;
}

void MyClass::_privateTest(void) const
{
    std::cout << "Private function called called" << std::endl;
    return;
}