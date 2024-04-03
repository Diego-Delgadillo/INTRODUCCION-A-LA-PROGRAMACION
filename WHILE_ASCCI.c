#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_CTYPE,"spanish");

    char letra = 0;

    printf("introduza una letra y regresará el valor numércio ASCCI \n");
    printf("letra= ");
    scanf("%c",&letra);
    fflush(stdin);


    while(letra !='+'){
        printf("Numero ASCCI =%d",letra);
        fflush(stdin);
        printf("\n");
        printf("introduzca una letra y regresará el valor numérico ASCII \n");
        printf("Para terminar pulse el símbolo +\n");
        printf("letra=");
        scanf("%c",&letra);
        fflush(stdin);

    }

    system("pause");
    return 0;

}












