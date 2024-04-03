#include<stdio.h>
#include<locale.h>
#include<mylibrary.h>

int main(){
    setlocale(LC_CTYPE,"spanish");
    float a=0, b=0, c=0, resultado;


    printf("Este programa resuelve raíces de \n");
    printf("ecuaciones de 2do grado de la forma \n");
    printf("ax^2+bx+c =0 \n\n");
    printf("Ingresa a = ");
    scanf("%f",&a);
    printf("Ingresa b = ");
    scanf("%f",&b);
    printf("Ingresa c = ");
    scanf("%f",&c);
    printf("\n\n");

    //llamado de funciones
    resultado=SegundoGradoP(a,b,c);
    printf("Raíz positiva= %G \n",resultado);

    resultado=SegundoGradoN(a,b,c);
    printf("Raíz negativa= %G \n\n",resultado);

}
