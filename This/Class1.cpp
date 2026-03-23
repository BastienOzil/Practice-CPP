#include "Class1.hpp"

MyClass1::MyClass1(char p1, int p2, float p3)
{
    std::cout << "Consructeur called" << std::endl;

    this->chr = p1;
    std::cout << "this->chr: " << this->chr << std::endl;

    this->num = p2;
    std::cout << "this->num: " << this->num << std::endl;

    this->flt = p3;
    std::cout << "this->flt: " << this->flt << std::endl;

    return;
}

MyClass1::~MyClass1(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}
