int main(void)
{
    int a = 42;                     // variable

    int const * b = &a;             //Implicit const cast
    int  * c = b;                   //Implicit const cast KO
    int * d = const_cast<int *>(b); //Explicit const cast OK

    return 0;
}

/*
    A utilisé qu'en cas d enecessité absolue, 
    et en connaissance de cause.
    La flemme n'ai pas une bonne raison.
*/