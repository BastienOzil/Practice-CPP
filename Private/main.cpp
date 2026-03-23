#include "Class.hpp"
#include <iostream>

int main()
{
    MyClass instance;

    instance.publicNum = 42;
    std::cout << "instance public: " << instance.publicNum << std::endl;
    instance.publicTest();

    return 0;
}