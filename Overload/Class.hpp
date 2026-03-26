#pragma once
#include <iostream>

class MyClass
{
  private:
	int _n;

  public:
	MyClass(int const n);
	~MyClass(void);

	int getValue(void) const;
	MyClass &operator=(MyClass const &rhs);      // instance courant midifiable
	MyClass operator+(MyClass const &rhs) const;
		// instance courant non modifiable
};

std::ostream &operator<<(std::ostream &o, MyClass const &rhs);