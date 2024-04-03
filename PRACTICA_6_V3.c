#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_CTYPE,"spanish");

    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;

    printf("Este programa imprime un histograma de 10 números\n");
    printf("Sólo acepta 10 números entre uno y veinte \n");

    do{
        printf("Ingrese el primer número: ");
        scanf("d",&n1);
        printf("Intente de nuevo!");
    }
    while(n1>=1 && n1<=20);


    return 0;
}
