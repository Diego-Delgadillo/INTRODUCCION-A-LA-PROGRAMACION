#include<stdio.h>

int main(){


    //for(float i = 1;i<= 10; i+=0.5)
        //printf("%f",i);


    //Esto imprime el abecedario de forma invertida
    //char car;
    //for(car='z'; car>='a'; car--)
        //printf("%c\t",car);

    //Esto hace un bucle infinito
    /*for(;;)
    {
        printf("Bucle infinito");
    }*/

    //Tablas de multiplicar
    int resultado = 0;

    for(int m=1; m<=10; m++){
        for(int n=1; n<=10; n++){
            resultado=n*m;
            printf("%d\t",resultado);
        }
        printf("\n");
    }



}
