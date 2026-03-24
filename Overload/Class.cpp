#include "Class.hpp"

MyClass::MyClass(int const n): _n(n)
{
    std::cout << "Consructeur called with _n = " << _n << std::endl;
    return;
}

MyClass::~MyClass(void)
{
    std::cout << "Destructor called to delete " << _n << std::endl;
    return;
}

int    MyClass::getValue(void) const
{
    return this->_n;
}

MyClass &   MyClass::operator=(MyClass const & rhs)
{
    std::cout << "Operator = called: " << this->_n;
    std::cout << " to " << rhs.getValue() << std::endl;

    this->_n = rhs.getValue(); // met a jour la valeur de _n

    return *this;// ne pas oublier le * pour déréférencé 
}

MyClass     MyClass::operator+(MyClass const & rhs) const
{
    std::cout << "Operator + called: " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;

    return MyClass(this->_n + rhs.getValue());// crée une copie d'instance
}

std::ostream &  operator<<(std::ostream & o, MyClass const & rhs)
{
    o << rhs.getValue();
    return o;
}