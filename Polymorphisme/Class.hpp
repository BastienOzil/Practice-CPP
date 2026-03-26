#pragma once
#include <iostream>

class MyClass
{
  public:
	MyClass(void);
	~MyClass(void);

	void test(char const c) const;
	void test(int const n) const;
	void test(float const f) const;
	void test(MyClass const &i) const;
	// trouve automatiquement la bonne fonction selon le paramètre
};