#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int contra=0;
    setlocale(LC_CTYPE,"spanish");

    do
    {
      printf("Ingresa tu contrase�a: ");
      scanf("%d",&contra);
      printf("\n");


    }

    while(contra!=1234);

    printf("podemos seguir!");










    return 0;
}













