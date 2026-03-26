#pragma once

#include <iomanip>
#include <iostream>

template <typename T = float> // type par default

class MyClass
{
  private:
	T const _x;
	T const _y;
	T const _z;

	MyClass(void)
	{
	}

  public:
	MyClass(T const &x, T const &y, T const &z) : _x(x), _y(y), _z(z)
	{
	}
	~MyClass(void)
	{
	}

	T const &getX(void) const
	{
		return (this->_x);
	}
	T const &getY(void) const
	{
		return (this->_y);
	}
	T const &getZ(void) const
	{
		return (this->_z);
	}
};

template <typename T> std::ostream &operator<<(std::ostream &o,
	MyClass<T> const &v)
{
	std::cout.precision(1);
	o << setiosflags(std::ios::fixed);
	o << "MyClass( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << " )";
	return (o);
}

/*
	Default Type est une fonctionnalité des templates qui permet
	de spécifier un type par défaut pour un paramètre de template.

	Cela signifie que si l'utilisateur ne fournit pas de type lors
	de l'instanciation
*/