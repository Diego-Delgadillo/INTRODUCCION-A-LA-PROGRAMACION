#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    //Declaramos variables
    setlocale(LC_CTYPE,"spanish");
    float a, b, x;
    int l;

    //mensaje en pantalla
    printf("Ingresa 2 n�meros reales: \n");
    //captura los datos
    scanf("%f %f",&a,&b);

    //mensaje en pantalla
    printf("Ingresa la operaci�n deseada: 1-suma, 2-resta, 3,multiplicaci�n\n");
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
            printf("\nIngres� una opci�n no v�lida!\n");
            break;
        }

    }

    //Da un tiempo para que no se cierre el programa
    //i love you karlis  <3
    system("pause");

    return 0;
}





