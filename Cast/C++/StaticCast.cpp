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
class Unrelated
{
};

int	main(void)
{
	Child1 a; // variable
	Parent b = a;                      // Implicit conversion cast
	Child1 c = b;                      // Implicit demotion KO
	Child2 d = static_cast<Child2>(b); // Explicit demotion OK
	Unrelated e = static_cast<Unrelated>(b); // Explicit cast KO,
		types are not related
	return (0);
}

/*
	Utilisé pour les conversions de types liés par une relation d'héritage.
	(upcast et downcast)
	Ne vérifie pas la validité de la conversion à l'exécution.
*/