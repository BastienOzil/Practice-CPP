#pragma once
#include <iostream>

class MyClass
{
  private:
	int _n;

  protected:
	int _protectedValue;

  public:
	MyClass(void);
	MyClass(int const n);
	MyClass(MyClass const &src);
	~MyClass(void);

	MyClass &operator=(MyClass const &rhs);
	int getValue(void) const;
	int getProtectedValue(void) const;
};

std::ostream &operator<<(std ::ostream &o, MyClass const &i);