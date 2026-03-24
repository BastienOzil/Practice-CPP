#include "Class.hpp"
#include <iostream>

int main()
{
    MyClass instance;

    instance.test('c');
    instance.test(42);
    instance.test(3.14f);
    instance.test(instance);
/* surcharge: appellé un fonction du même nom 
mais trouve automatiquement la bonne fonction 
selon le paramètre fournis*/
    return 0;
}