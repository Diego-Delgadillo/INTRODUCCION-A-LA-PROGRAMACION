#include<stdio.h>
#include<locale.h>

#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "spanish");
    // Las dos l�neas siguientes declaran la variable entera a,
    // el apuntador q a enteros y la variable real b.
    int a = 10, *q;
    double b = 0.0;
    q = &a; // asigna la direcci�n de a, a la variable q.
    // q apunta a la variable entera a
    b = *q; // asigna a b el valor de la variable a
    printf("En la direcci�n %X est� el dato %G \n", q, b);
}


















