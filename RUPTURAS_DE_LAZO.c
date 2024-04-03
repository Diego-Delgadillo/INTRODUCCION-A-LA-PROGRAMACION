#include<stdio.h>
#include<locale.h>

int main(){

    int resultado=0;

    for(int m=1;m<=10;m++){
        for(int n=1;n<=10;n++){
            resultado=n*m;

            if(resultado %21 ==0)

                //continue;
                goto salida;
                printf("%d\t",resultado);
                //break;



        }
        printf("\n");

    }
    salida:
        printf(" ");
}
