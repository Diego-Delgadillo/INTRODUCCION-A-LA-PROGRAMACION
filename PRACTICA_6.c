#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
        setlocale(LC_CTYPE,"spanish");

        int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;

        printf("Este programa imprime un histograma de 10 números\n");
        printf("Sólo acepta 10 números entre uno y veinte \n");

        for(int i=1; i=10;i++){
            do{

                printf("\nIngrese el primer número \n");
                scanf("%d",&n1);
                printf("\nIngrese el segundo número: \n");
                scanf("%d",&n2);
                printf("\nIngrese el tercer número \n");
                scanf("%d",&n3);
                printf("\nIngrese el cuarto número \n");
                scanf("%d",&n4);
                printf("\nIngrese el quinto número \n");
                scanf("%d",&n5);
                printf("\nIngrese el sexto número \n");
                scanf("%d",&n6);
                printf("\nIngrese el séptimo número \n");
                scanf("%d",&n7);
                printf("\nIngrese el octavo número \n");
                scanf("%d",&n1);
                printf("\nIngrese el noveno número \n");
                scanf("%d",&n9);
                printf("\nIngrese el décimo número \n");
                scanf("%d",&n10);



            }
            while((n1&&n2&&n3&&n4&&n5&&n6&&n7&&n8&&n9&&n10) >=1 && (n1&&n2&&n3&&n4&&n5&&n6&&n7&&n8&&n9&&n10) <=20);{
                printf("\nNúmero fuera del rango! Intente de nuevo por favor");
            }

        }














}

















