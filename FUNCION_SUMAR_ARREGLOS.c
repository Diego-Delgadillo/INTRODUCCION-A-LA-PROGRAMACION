#include<stdio.h>
#include<locale.h>

//Esta funcion realiza la suma en un arreglo
float ArrSum(float N[],int n){

    float R;

    for(int i=0;i<n;i++)
        R=R+N[i];


    return R;

}

int main(){
    setlocale(LC_CTYPE,"spanish");

    printf("Este programa realiza la suma de un arreglo de 1 dimensión\n");

    int a;

    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d",a);

    float A[a];

    for(int j=0; j<9;j++){
        printf("Ingrese el número %d: ",j+1);
        scanf("%f",&A[j]);
    }


    printf("La suma del arreglo es %G",ArrSum(A,a));



}






