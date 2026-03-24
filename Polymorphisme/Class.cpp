#include "Class.hpp"

MyClass::MyClass(void)
{
    std::cout << "Consructeur called" << std::endl;
    return;
}

MyClass::~MyClass(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    MyClass::test(char const c) const
{
    std::cout << "Char called: " << c << std::endl;
    return;
}

void    MyClass::test(int const n) const
{
    std::cout << "Int called: " << n << std::endl;
    return;
}

void    MyClass::test(float const f) const
{
    std::cout << "Float called: " << f << std::endl;
    return;
}

void    MyClass::test(MyClass const & i) const
{
    (void) i;
    std::cout << "MyClass called" << std::endl;
    return;
}