#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_CTYPE,"spanish");

    char letra = 0;

    printf("introduza una letra y regresar� el valor num�rcio ASCCI \n");
    printf("letra= ");
    scanf("%c",&letra);
    fflush(stdin);


    while(letra !='+'){
        printf("Numero ASCCI =%d",letra);
        fflush(stdin);
        printf("\n");
        printf("introduzca una letra y regresar� el valor num�rico ASCII \n");
        printf("Para terminar pulse el s�mbolo +\n");
        printf("letra=");
        scanf("%c",&letra);
        fflush(stdin);

    }

    system("pause");
    return 0;

}












