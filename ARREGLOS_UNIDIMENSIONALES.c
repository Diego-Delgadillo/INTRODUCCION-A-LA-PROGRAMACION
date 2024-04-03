#include<stdio.h>

int main(){
    int N=10;
    int m[N];//crea la matriz m
    int i =0;//subindice
    printf("Introduce los valores de la matriz:\n");

    //ENtrada de datos
    for(i=0;i<N;i++){
        printf("m[%d]=",i);
        scanf("%d",&m[i]);
    }

    //salida de datos
    printf("\n\n");

    for(i=0;i<N;i++){
        printf("m[%d]*10= %d\n",i,m[i]*10);

    }
    printf("\n\nFin del proceso\n");


    return 0;
}












