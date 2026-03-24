#include "Class.hpp"
#include <iostream>

int main()
{
    MyClass a(30);
    MyClass b(10);
    MyClass c(0);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    b = MyClass(12);
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    c = a + b;
    std::cout << "c = " << c << std::endl;

    return 0;
}

/*
    Les 3 règles des surcharges d'operateurs:

    -La surcharge d'operteur doit etre naturelle 
    pour evité les comportements inattendu.

    -La surcharge doit estre liée a la sémantique 
    de l'operateur, (+ avecc +, x avec x, etc...).

    -N'en faite pas.
    (a utiliser qu'en cas de necessité et non car c'est jolie)
*/