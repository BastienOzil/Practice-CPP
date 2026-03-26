#pragma once
#include "Class.hpp"
#include <iomanip>
#include <iostream>

template <typename U>

class MyClass<int, U> // partial specialization
{
  private:
	int const _lhs;
	U const _rhs;

	MyClass(void);

  public:
	MyClass(int const &lhs, U const &rhs) : _lhs(lhs), _rhs(rhs)
	{
		std::cout << "Partial specialization" << std::endl;
	}
	~MyClass(void)
	{
	}

	int const &fst(void) const
	{
		return (this->_lhs);
	}
	U const &snd(void) const
	{
		return (this->_rhs);
	}
};

/*
	Specialization de template parciele est une fçon de faire
	qui permet de spécialiser un template pour un sous-ensemble
	de ses paramètres de template.
*/