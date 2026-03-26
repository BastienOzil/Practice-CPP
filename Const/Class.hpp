#pragma once
#include <iostream>

class MyClass
{
  public:
	int num;
	float const pi;

	MyClass(float const f);
	~MyClass(void);

	void test(void) const;
	// rend le fonction et ces variable impossible à modifier
};