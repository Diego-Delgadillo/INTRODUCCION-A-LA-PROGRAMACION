#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    //Declaramos variables
    setlocale(LC_CTYPE,"spanish");
    float a, b, x;
    int l;

    //mensaje en pantalla
    printf("Ingresa 2 números reales: \n");
    //captura los datos
    scanf("%f %f",&a,&b);

    //mensaje en pantalla
    printf("Ingresa la operación deseada: 1-suma, 2-resta, 3,multiplicación\n");
    //captura los datos
    scanf("%i",&l);

    //Estructura selectiva multiple switch
    switch(l){
        case 1:{
            x=a+b;
            printf("%.2f\n",x);
            break;
        }

        case 2:{
            x=a-b;
            printf("%.2f\n",x);
            break;
        }

        case 3:{
            x=a*b;
            printf("%.2f\n",x);
            break;
        }

        default:{
            printf("\nIngresó una opción no válida!\n");
            break;
        }

    }

    //Da un tiempo para que no se cierre el programa
    //i love you karlis  <3
    system("pause");

    return 0;
}





