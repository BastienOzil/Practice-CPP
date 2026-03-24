#include "OriginalClass.hpp"

MyClass::MyClass(void): _n(0), _protectedValue(0)
{
    std::cout << "[Original] Constructeur par defaut" << std::endl;
    return;
}

MyClass::MyClass(int const n): _n(n), _protectedValue(n)
{
    std::cout << "[Original] Constructeur parametrique" << std::endl;
    return;
}

MyClass::MyClass(MyClass const & src)
{
    std::cout << "[Original] Constructeur de copie" << std::endl;
    *this = src;
    return;
}

MyClass::~MyClass(void)
{
    std::cout << "[Original] Destructeur" << std::endl;
    return;
}

int    MyClass::getValue(void) const
{
    return this->_n;
}

int    MyClass::getProtectedValue(void) const
{
    return this->_protectedValue;
}

MyClass &   MyClass::operator=(MyClass const & rhs)
{
    std::cout << "Operator called" << std::endl;
    if(this != &rhs)
    {
        this->_n = rhs.getValue();
        this->_protectedValue = rhs.getProtectedValue();
    }

    return *this;
}

std::ostream &  operator<<(std::ostream & o, MyClass const & i)
{
    o << "Value of _n is: "<< i.getValue();
    return o;
}