#include "Heritier1.hpp"

Heritier1::Heritier1(void) : _n1(0)
{
	std::cout << "[Heritier1] Constructeur par defaut" << std::endl;
	return ;
}

Heritier1::Heritier1(int const n) : _n1(n)
{
	std::cout << "[Heritier1] Constructeur parametrique" << std::endl;
	return ;
}

Heritier1::Heritier1(Heritier1 const &src) : MyClass(src), _n1(src._n1)
{
	std::cout << "[Heritier1] Constructeur de copie" << std::endl;
	return ;
}

Heritier1::~Heritier1(void)
{
	std::cout << "[Heritier1] Destructeur" << std::endl;
	return ;
}

int Heritier1::getValue(void) const
{
	return (this->_n1);
}

Heritier1 &Heritier1::operator=(Heritier1 const &rhs)
{
	std::cout << "Operator called" << std::endl;
	if (this != &rhs)
	{
		MyClass::operator=(rhs);
		this->_n1 = rhs.getValue();
	}
	return (*this);
}

void Heritier1::setProtectedValueFromHeritier(int const value)
{
	this->_protectedValue = value;
}

int Heritier1::getProtectedValueFromHeritier(void) const
{
	return (this->_protectedValue);
}

void Heritier1::addTenToProtected(void)
{
	this->_protectedValue += 10;
}

std::ostream &operator<<(std::ostream &o, Heritier1 const &i)
{
	o << "Value of _n1 is: " << i.getValue();
	return (o);
}