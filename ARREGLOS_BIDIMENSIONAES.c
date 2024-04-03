#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_CTYPE,"spanish");

    //declaramos la matriz


    printf("Este programa asigna datos a una matriz de 2 dimensiones\n");
    printf("Y calculará la sumas correspondientes a las filas de la matriz\n\n");
    int f=0;
    int c=0;

    printf("Numero de filas de la matriz: ");
    scanf("%d",&f);

    printf("Numero de columnas de la matriz: ");
    scanf("%d",&c);


    printf("\nIngresa el valor de cada elemento de la matriz\n");

    int m[f][c];

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            printf("\nm[%d][%d]= ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("\n\n");

    int sum =0;

    for(int i=0;i<f;i++)
        {
        for(int j=0;j<c;j++)
        {
            sum=sum+m[i][j];
        }
        printf("Suma de la fila %d=%d\n",i,sum);
        sum=0;
    }

    printf("\n Fin del proceso\n");

    return 0;
}
