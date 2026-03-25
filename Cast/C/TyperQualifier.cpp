int main(void)
{
    int a = 42;                         // variable
    int const * b = a;                  //Implicit const cast
    int const * c = (int const &) a;    //Explicit const cast

    int const * d = &a;             //Implicit promotion OK
    int * e = d;                    //Implicit demotion KO
    int * f = (int *) d;            //Explicit demotion OK

    return 0;
}