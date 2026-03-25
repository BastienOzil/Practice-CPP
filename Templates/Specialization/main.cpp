#include "Class.hpp"
#include "Partiel.hpp"
#include "Complete.hpp"

#include <iostream>

int main(void)
{
    MyClass<float, int> generic(3.14f, 42);
    MyClass<int, double> partial(10, 2.5);
    MyClass<bool, bool> complete(true, false);

    std::cout << "generic  : (" << generic.fst() << ", " << generic.snd() << ")" << std::endl;
    std::cout << "partial  : (" << partial.fst() << ", " << partial.snd() << ")" << std::endl;
    std::cout << "complete : (" << complete.fst() << ", " << complete.snd() << ")" << std::endl;

    return 0;
}
