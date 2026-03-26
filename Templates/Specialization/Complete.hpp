#pragma once
#include "Class.hpp"
#include <iomanip>
#include <iostream>

template <> class MyClass<bool, bool> // full specialization
{
  private:
	bool const _n;
	MyClass(void);

  public:
	MyClass(bool lhs, bool rhs) : _n(lhs || rhs)
	{
		std::cout << "Specialized bool/bool" << std::endl;
	}
	~MyClass(void)
	{
	}

	bool fst(void) const
	{
		return (this->_n & 0x01);
	}
	bool snd(void) const
	{
		return (this->_n & 0x02);
	}
};

/*
	Specialization complete de template est une façon de faire
	qui permet de spécialiser un template pour un ensemble
	complet de ses paramètres de template.
*/