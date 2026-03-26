#pragma once

#include <iomanip>
#include <iostream>

template <typename T, typename U> // template generique

class MyClass
{
  private:
	T const _lhs;
	U const _rhs;

	MyClass<T, U>(void);

  public:
	MyClass<T, U>(T const &lhs, U const &rhs) : _lhs(lhs), _rhs(rhs)
	{
		std::cout << "Generic template" << std::endl;
	}
	~MyClass<T, U>(void)
	{
	}

	T const &fst(void) const
	{
		return (this->_lhs);
	}
	U const &snd(void) const
	{
		return (this->_rhs);
	}
};

/*
	Template generique est une façon de faire qui permet de
	définir une classe ou une fonction qui peut fonctionner
	avec n'importe quel type de données.
*/