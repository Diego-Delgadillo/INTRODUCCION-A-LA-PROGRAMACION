#include<stdio.h>
#include<locale.h>

float a = 11;

int main(){
    setlocale(LC_CTYPE, "spanish");

    float b = 2, c;
    c = a/b;

    //Con la G me da el valor sin agregarle mas ceros
    printf("c = %G\n", c);


    printf("Niño, Número\n");


    return 0;
}
