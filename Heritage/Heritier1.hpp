#pragma once 
#include <iostream>
#include "OriginalClass.hpp"

class Heritier1 : public MyClass
 {

    private:
        int _n1;

    public:
        Heritier1(void);
        Heritier1(int const n);
        Heritier1(Heritier1 const & src);
        ~Heritier1(void);

    Heritier1 &   operator=(Heritier1 const & rhs);
    int getValue(void) const;
    void setProtectedValueFromHeritier(int const value);
    int getProtectedValueFromHeritier(void) const;
    void addTenToProtected(void);
};

std::ostream & operator<<(std ::ostream & o, Heritier1 const & i);