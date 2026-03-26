#pragma once

class MyClass
{
  public:
	virtual ~MyClass(void);
};

class Child1 : public MyClass
{
  public:
	Child1(void);
	virtual ~Child1(void);
};

class Child2 : public MyClass
{
  public:
	Child2(void);
	virtual ~Child2(void);
};