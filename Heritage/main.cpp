#include "OriginalClass.hpp"
#include "Heritier1.hpp"
#include "Heritier2.hpp"
#include <iostream>

int main()
{
    MyClass base(10);
    Heritier1 heritier1(20);
    Heritier2 heritier2(30);

    heritier1.setProtectedValueFromHeritier(40);
    heritier2.setProtectedValueFromHeritier(50);

    heritier1.addTenToProtected();
    heritier2.doubleProtected();

    std::cout << "Classe de base: " << base << std::endl;
    std::cout << "Valeur protected dans base: " << base.getProtectedValue() << std::endl;
    std::cout << "Heritier 1: " << heritier1 << std::endl;
    std::cout << "Protected vu par Heritier1 (+10): " << heritier1.getProtectedValueFromHeritier() << std::endl;
    std::cout << "Heritier 2: " << heritier2 << std::endl;
    std::cout << "Protected vu par Heritier2 (x2): " << heritier2.getProtectedValueFromHeritier() << std::endl;

    return 0;
}