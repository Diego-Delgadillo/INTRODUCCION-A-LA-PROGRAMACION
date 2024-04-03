#include<stdio.h>
#include<locale.h>

//Este programa esta diseñado para resolver la primer practica

int G = 555;
const int C = 222;

int main(){

    setlocale(LC_CTYPE,"spanish");
    printf("Variable iniciales pr�ctica 2\n");

    //declaramos las variables
    short n = 250;
    int k = 10;
    long z = 5000;

    unsigned short n1 = 20;
    unsigned int k1 = 30;
    unsigned long z1 = 0;
    char Equipo = 'A';
    float a = 3.14159;
    double b = 0.000000000345;

    //declaramos la variable tipo enum
    enum frutas{
        naranja, limon, mango, uva, sandia, melon, fresas, toronja
    };

    enum frutas temporada = melon;
    static int Contador = 900;


    printf("G = %d \n", G);
    printf("C = %d \n ", C);
    printf("n = %d \n", n);
    printf("k = %d \n", k);
    printf("z = %d \n", z);
    printf("n1 = %u \n", n1);
    printf("k1 = %u \n", k1);
    printf("z1 = %u \n", z1);
    printf("Equipo = %c \n", Equipo);
    printf("a = %f \n", a);
    printf("b = %g \n", b);
    printf("temporada = %d \n",temporada);
    printf("contador = %d \n", Contador);


    //Estas sentencias modifican el valor de las variables
    n++;
    k--;
    z = z + n + k;
    n1 = n1 + n1 + n1;
    k1 = k1 - k1;
    z1 = z1 - 1;
    Equipo = Equipo + 3;
    a = a * n / k;
    b = b * 100;
    temporada = temporada + 2;
    G = G -55;
    Contador++;

    //Ahora modificamos los valores de las variables modificadas
    printf("\n");
    printf("Variables modificadas\n");

    printf("G = %d \n", G);
    printf("C = %d \n ", C);
    printf("n = %d \n", n);
    printf("k = %d \n", k);
    printf("z = %d \n", z);
    printf("n1 = %u \n", n1);
    printf("k1 = %u \n", k1);
    printf("z1 = %u \n", z1);
    printf("Equipo = %c \n", Equipo);
    printf("a = %f \n", a);
    printf("b = %g \n", b);
    printf("temporada = %d \n",temporada);
    printf("contador = %d \n", Contador);
}




