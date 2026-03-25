int main(void)
{
    float a = 42.042;           // variable
    void * b = &a;              //Implicit reinterpret cast
    void * c = (void *) &a;     //Explicit reinterpret cast

    void * d = &a;              //Implicit promotion OK
    int * e = d;                //Impliciti demotion KO
    int * f = (int *) d;        //Expliciti demotion OK
}