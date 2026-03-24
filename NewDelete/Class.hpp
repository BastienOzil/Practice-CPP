#pragma once
#include <iostream>

class MyClass {

    private:
        std::string _memory;

    public:
        MyClass(std::string memory);
        ~MyClass(void);

    void    publicTest(void) const;

};