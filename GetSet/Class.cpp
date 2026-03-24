#include "Class.hpp"

MyClass::MyClass(void)
{
    std::cout << "Consructeur called" << std::endl;

    this->setNum(0);
    std::cout << "this->getNum(): " << this->getNum() << std::endl;
    return;
}

MyClass::~MyClass(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int MyClass::getNum(void) const
{
    return this->_num;
}

void MyClass::setNum(int val)
{
    if (val >= 0)
        this->_num = val;
    return;
}