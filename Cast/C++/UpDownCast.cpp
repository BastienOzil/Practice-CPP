#include <iostream>

class Parent
{
};
class Child1 : public Parent
{
};
class Child2 : public Parent
{
};

int	main(void)
{
	Child1	a;

	Parent *b = &a;           // Implicit upcast
	Parent *c = (Parent *)&a; // Explicit upcast
	Parent *d = &a;          // Implicit promotion OK
	Child1 *e = b;           // Implicit demotion KO
	Child2 *f = (Child2 *)b; // Explicit demotion OK
	return (0);
}

/*
	Upcast : conversion d'un type dérivé vers un type de base.
	Downcast : conversion d'un type de base vers un type dérivé.
*/