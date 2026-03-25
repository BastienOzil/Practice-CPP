#include "Class.hpp"
#include <iostream>

int main(void)
{
    MyClass<int>  v1(12, 34, 56);
    MyClass<>     v2(12, 34 ,56);

    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;

    return 0;
}