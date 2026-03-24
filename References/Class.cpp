#include "Class.hpp"

MyClass::MyClass(void)
{
    std::cout << "Consructeur called" << std::endl;
    return;
}

MyClass::~MyClass(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void MyClass::test_Ptr(std::string* str)
{
    *str += " Here is the ptr";
}

void MyClass::test_ConstPtr(std::string const * str)
{
    std::cout << *str << std::endl;
}

void MyClass::test_Ref(std::string& str)
{
    str += " Here is the ref";
}

void MyClass::test_ConstRef(std::string const & str)
{
    std::cout << str << std::endl;
}