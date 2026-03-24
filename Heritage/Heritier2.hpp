#pragma once 
#include <iostream>
#include "OriginalClass.hpp"

class Heritier2 : public MyClass
{

    private:
        int _n2;

    public:
        Heritier2(void);
        Heritier2(int const n);
        Heritier2(Heritier2 const & src);
        ~Heritier2(void);

    Heritier2 &   operator=(Heritier2 const & rhs);
    int getValue(void) const;
    void setProtectedValueFromHeritier(int const value);
    int getProtectedValueFromHeritier(void) const;
    void doubleProtected(void);
};

std::ostream & operator<<(std ::ostream & o, Heritier2 const & i);