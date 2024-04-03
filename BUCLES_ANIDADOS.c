#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_CTYPE,"spanish");

    //Declaramos las variables

    int n=1;//filas
    int m=1;//columnas
    int resultado = 0;

    while(m<=20)
        {
            while(n<=20)
            {
                resultado=n*m;
                printf("%d\t",resultado);
                n =n+1;
            }
            n=1;
            printf("\n");
            m = m+1;
        }
    system("pause");
    return 0;
}
