#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
        setlocale(LC_CTYPE,"spanish");

        int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;

        printf("Este programa imprime un histograma de 10 n�meros\n");
        printf("S�lo acepta 10 n�meros entre uno y veinte \n");

        for(int i=1; i=10;i++){
            do{

                printf("\nIngrese el primer n�mero \n");
                scanf("%d",&n1);
                printf("\nIngrese el segundo n�mero: \n");
                scanf("%d",&n2);
                printf("\nIngrese el tercer n�mero \n");
                scanf("%d",&n3);
                printf("\nIngrese el cuarto n�mero \n");
                scanf("%d",&n4);
                printf("\nIngrese el quinto n�mero \n");
                scanf("%d",&n5);
                printf("\nIngrese el sexto n�mero \n");
                scanf("%d",&n6);
                printf("\nIngrese el s�ptimo n�mero \n");
                scanf("%d",&n7);
                printf("\nIngrese el octavo n�mero \n");
                scanf("%d",&n1);
                printf("\nIngrese el noveno n�mero \n");
                scanf("%d",&n9);
                printf("\nIngrese el d�cimo n�mero \n");
                scanf("%d",&n10);



            }
            while((n1&&n2&&n3&&n4&&n5&&n6&&n7&&n8&&n9&&n10) >=1 && (n1&&n2&&n3&&n4&&n5&&n6&&n7&&n8&&n9&&n10) <=20);{
                printf("\nN�mero fuera del rango! Intente de nuevo por favor");
            }

        }














}

















