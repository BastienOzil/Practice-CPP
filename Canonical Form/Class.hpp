#pragma once 
#include <iostream>

/* une forme canonique est constitué: 
-constructeur
-copie
-Operateur
-destructeur
Il sagit d'une norme et donc TOUTES les classes doivent etre canoniques
*/

class MyClass {

    private:
        int _n;

    public:
        MyClass(void); // constructeur
        MyClass(int const n);
        MyClass(MyClass const & src);// copie
        ~MyClass(void);// destructeur

    MyClass &   operator=(MyClass const & rhs);// operateur
    int getValue(void) const;
};

std::ostream & operator<<(std ::ostream & o, MyClass const & i);