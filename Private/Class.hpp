#pragma once
#include <iostream>

class MyClass
{
  private:
	int _privateNum; // _ avant le nom est une norme pour les synthaxes privates
	void _privateTest(void) const;

  public:
	int publicNum;

	MyClass(void);
	~MyClass(void);

	void publicTest(void) const;
};