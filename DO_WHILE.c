#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_CTYPE,"spanish");

    float k=0;

    do
    {//ejecutar las sentencias siguentes
        printf("Debes pesar 50 kilos o más para seguir\n");
        printf("Ingresa tu peso: ");
        scanf("%f",&k);
    }

    while(k < 50);//mientras n sea menor que 50

    printf("\n El programa sigue con personas de más de 50 kilos");

    return 0;
}














