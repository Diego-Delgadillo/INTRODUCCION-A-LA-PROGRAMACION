#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){

    int edad = 0;
    setlocale(LC_CTYPE,"spanish");

    printf("Ingresa tu edad: ");
    scanf("%d",&edad);

    while(edad < 20){

    printf("Debes tener 20 años o más para seguir!");
    printf("\nIngresa tu edad: ");
    printf("Edad= %d\n",edad);
    edad++;
    //scanf("%d",&edad);
    }


    printf("Podemos seguir :D\n");









    return 0;
}


