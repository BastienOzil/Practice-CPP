#include "Class.hpp"
#include <iostream>

int main()
{
    MyClass instance;
    MyClass *   instance_P = &instance;

    int     MyClass::*p = NULL; // pointeur sur entier de la class
    void       (MyClass::*f)(void) const;// defini le type le nom et l'adresse

    p = &MyClass::num;

    std::cout << "Value of num: " << instance.num << std::endl;
    instance.*p = 24; //assigne 24 au contenu du pointeur p de l'instance
    std::cout << "Value of num: " << instance.num << std::endl;
    instance_P->*p = 42; // si un poiteur d'instance, ->* est necessaire
    std::cout << "Value of num: " << instance.num << std::endl;


    f = &MyClass::test;

    (instance.*f)();
    (instance_P->*f)();

    return 0;
}