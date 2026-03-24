#include "Class.hpp"

MyClass::MyClass(void): _n(0)
{
    std::cout << "Default Consructeur called" << std::endl;
    return;
}

MyClass::MyClass(int const n): _n(n)
{
    std::cout << "Parametric Consructeur called" << std::endl;
    return;
}

MyClass::MyClass(MyClass const & src)
{
    std::cout << "Copy Consructeur called" << std::endl;
    *this = src;
    return;
}

MyClass::~MyClass(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int    MyClass::getValue(void) const
{
    return this->_n;
}

MyClass &   MyClass::operator=(MyClass const & rhs)
{
    std::cout << "Operator called" << std::endl;
    if(this != &rhs)
        this->_n = rhs.getValue();

    return *this;
}

std::ostream &  operator<<(std::ostream & o, MyClass const & i)
{
    o << "Value of _n is: "<< i.getValue();
    return o;
}