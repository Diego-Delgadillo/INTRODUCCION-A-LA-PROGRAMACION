#include<stdio.h>

int main(){
    //declaramos el arreglo con corechetes y enueraloms la lista con llaves
    //int m[]={10,20,30,40,50};
        //printf("%d",m[3]);

    int n[5];
    n[0]=10;
    n[1]=20;
    n[2]=30;
    n[3]=40;
    n[4]=50;
    printf("%d",n[3]);


    int m2[0]={0};
    int cont = 10;

    for(int i=0; i<5;i++){
        m2[i]=cont;
        cont = cont+10;
    }
    printf("%d\n",m2[1]);


    int m3[5],suma=0;

    for(int i=0; i<5;i++){

        printf("Ingresa el valor %d: \n",i+1);
        scanf("%d",&m3[i]);
        suma=suma+m3[i];
    }

    printf("\nSuma= %d",suma);






    return 0;
}


