int main(void)
{
    int a = 42;             // variable
    double b = a;           //Implicit conversion cast
    double c = (double) a;  //Explicit conversion cast

    double d = a;           //Implicit promotion OK
    int e = d;              //Impliciti demotion KO
    int f = (int)d;         //Implicit demotion OK

/*
    "double" etant plus precis qu'un int, une precision 
    est necessaire lors d'une retrogradation/demotion 
    perte de precision de la variable au niveau des bits.
*/
}