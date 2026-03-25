#include <iostream>

class A {};
class B {};

class C
{
    public: 
                 C(A const & _ ) {return;};
        explicit C(B const & _ ) {return;}; 
};

void f( C const & _ ) 
{ 
    return; 
};

int main()
{
    f( A() ); 
// OK, conversion implicite de A à C
    f( B() ); 
// ERREUR, conversion implicite de B à C interdite à cause du mot-clé explicit

    return 0;
}

/*
    explicit est un mot-clé en C++ qui est utilisé pour marquer 
    les constructeurs d'une classe afin d'empêcher les conversions 
    implicites. 
    
    Lorsqu'un constructeur est déclaré comme explicit, 
    il ne peut pas être utilisé pour effectuer des conversions 
    automatiques entre types, ce qui peut aider à éviter 
    des erreurs de programmation involontaires.
*/