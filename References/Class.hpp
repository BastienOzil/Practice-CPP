#pragma once
#include <iostream>

class MyClass {

    public:
        char* str;

        MyClass(void);
        ~MyClass(void);

    void test_Ptr(std::string* str);
    void test_ConstPtr(std::string const * str);
    void test_Ref(std::string& str);
    void test_ConstRef(std::string const & str);
};