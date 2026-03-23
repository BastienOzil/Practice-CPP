#pragma once
#include <iostream>

class MyClass {

    private:
        int _num; 

    public:

        MyClass(void);
        ~MyClass(void);
        
    int     getNum(void) const;
    void    setNum(int val);
};