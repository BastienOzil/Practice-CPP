#include <iostream>

template <typename T>

T const &max(T const &x, T const &y)
{
	return (x >= y ? x : y);
}

int	num(int x)
{
	std::cout << "Computing..." << std::endl;
	return (x);
}

int	main(void)
{
	int		a;
	int		b;
	float	c;
	float	d;
	char	e;
	char	f;
	int		ret;

	a = 20;
	b = 42;
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;
	c = -1.7f;
	d = 4.2f;
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<int>(c, d) << std::endl;
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max(c, d) << std::endl;
	e = 'a';
	f = 'z';
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max<int>(e, f) << std::endl;
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max(e, f) << std::endl;
	ret = max<int>(num(a), num(b));
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;
	return (0);
}

/*
	Template sont des fonctions ou des classes génériques
	qui permettent de travailler avec n'importe quel type de données.
*/