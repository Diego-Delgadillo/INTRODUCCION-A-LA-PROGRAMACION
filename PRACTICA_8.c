#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>



int main(){

    setlocale(LC_CTYPE,"spanish");
    printf("Este programa convierte números base 10 a binarios\n");
    printf("¿Cuántos números deseas convertir? (máximo 20 números)\n");

    //variable de numeros a convertir
    int nc;
    scanf("%d",&nc);

    //ciclo de control
    while(nc<1 || nc>20)
    {
        printf("Solo de 1 a 20 números!\n\a");
        printf("\n¿Cuántos números deseas convertir?: \n");
        scanf("%d",&nc);
    }


    //ciclo para ingresar números
    int m [nc+1][17];
    m[0][0]=0;

    for(int i=1; i<=nc; i++){
        printf("Ingrese el número %d: ",i);
        scanf("%d",&m[i][0]);
    }

    printf("\n");
    //variable para que imprima el valode de banrio a decimal de la potencia 0 a 15
    int j=15;

    //ciclo para imprimir la fila de
    for(int i=0; i<16; i++){
        m[0][i+1]=pow(2,j);
        j--;
    }

    int rw=0;
    //regnlones
    for(int i=1; i<nc+1; i++){
        rw=m[i][0];
        //columnas
        for(int j=1; j<17; j++){

            if(rw >= m[0][j]){
                m[i][j]=1;
                rw=rw-m[0][j];
            }

            else{
                m[i][j]=0;
            }
        }
    }

    //ciclo for para imprimir los valores ya sea de 0 o 1

    for(int i=0; i<nc+1; i++){
        for(int j=0;j<17;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    printf("\nINTRODUCCIÓN A LA PROGRAMACION");
    printf("\nDIEGO RICARDO DELGADILLO GÓMEZ-1MM1");
    printf("\n");
    system("pause");
    return 0;
}
































