#include <exception>
#include <iostream>
#include <typeinfo>

class Parent
{
  public:
	virtual ~Parent(void)
	{
	}
};
class Child1 : public Parent
{
};
class Child2 : public Parent
{
};

int	main(void)
{
	Child1	*c;

	Child1 a; // variable
	Parent *b = &a; // Implicit upcast OK
	c = dynamic_cast<Child1 *>(b);
	// include <typeinfo> for dynamic_cast and std::bad_cast
	if (c == NULL)
	{
		std::cout << "Conversion is KO" << std::endl;
	}
	else
	{
		std::cout << "Conversion is OK" << std::endl;
	}
	// include <exception> for std::bad_cast
	try
	{
		Child2 &d = dynamic_cast<Child2 &>(*b);
		std::cout << "Conversion is OK" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		std::cout << "Conversion is KO: " << e.what() << std::endl;
	}
	return (0);
}

/*
	Utilisé pour les conversions de types polymorphiques.
	(classes avec au moins une fonction virtuelle)
	Permet de vérifier la validité de la conversion à l'exécution.
*/