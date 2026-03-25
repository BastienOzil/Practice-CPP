#pragma once 
#include <iostream>

class MyClass {

    private:
        float _n;

    public:
        MyClass(float const n);
        ~MyClass(void);

    float    get_n(void);

    operator float() {return this->_n;};
    operator int() {return static_cast<int>(this->_n);};
};

/*
    cast operator sont des fonctions membres d'une classe qui
    permettent de convertir une instance de cette classe 
    en un autre type.

    Ils sont définis en utilisant le mot-clé operator 
    suivi du type de conversion souhaité.
*/