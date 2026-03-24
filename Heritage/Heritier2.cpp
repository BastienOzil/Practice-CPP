#include "Heritier2.hpp"

Heritier2::Heritier2(void): _n2(0)
{
    std::cout << "[Heritier2] Constructeur par defaut" << std::endl;
    return;
}

Heritier2::Heritier2(int const n): _n2(n)
{
    std::cout << "[Heritier2] Constructeur parametrique" << std::endl;
    return;
}
Heritier2::Heritier2(Heritier2 const & src): MyClass(src), _n2(src._n2)
{
    std::cout << "[Heritier2] Constructeur de copie" << std::endl;
    return;
}

Heritier2::~Heritier2(void)
{
    std::cout << "[Heritier2] Destructeur" << std::endl;
    return;
}

int    Heritier2::getValue(void) const
{
    return this->_n2;
}

Heritier2 &   Heritier2::operator=(Heritier2 const & rhs)
{
    std::cout << "Operator called" << std::endl;
    if(this != &rhs)
    {
        MyClass::operator=(rhs);
        this->_n2 = rhs.getValue();
    }

    return *this;
}

void    Heritier2::setProtectedValueFromHeritier(int const value)
{
    this->_protectedValue = value;
}

int    Heritier2::getProtectedValueFromHeritier(void) const
{
    return this->_protectedValue;
}

void    Heritier2::doubleProtected(void)
{
    this->_protectedValue *= 2;
}

std::ostream &  operator<<(std::ostream & o, Heritier2 const & i)
{
    o << "Value of _n2 is: "<< i.getValue();
    return o;
}