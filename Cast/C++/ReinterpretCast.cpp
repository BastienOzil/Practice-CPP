int main(void)
{
    float a = 42.042f;          // variable

    void * b = &a;              //Implicit reinterpret cast OK
    void * c = reinterpret_cast<void *>(b); //Explicit reinterpret cast OK
    void & d = reinterpret_cast<void &>(b); //Explicit reinterpret cast OK

    return 0;
}

/*
    Permet de réinterpréter les bits d'une variable comme 
    un autre type.
    A utiliser avec précaution, et en connaissance de cause.
    Par ce que c'est "Jolie" n'est pas une raison.
*/