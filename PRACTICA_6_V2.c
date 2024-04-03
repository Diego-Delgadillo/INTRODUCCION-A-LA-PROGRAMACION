#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

        setlocale(LC_CTYPE,"spanish");


        //Declaramos las variables
        int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
        int max=0;

        printf("Este programa imprime un histograma de 10 números\n");
        printf("Sólo acepta 10 números entre uno y veinte \n");

            printf("\nIngrese el primer número: ");
            scanf("%d",&n1);
            if(n1 >= max)
                max=n1;

            //Esta parte determina si los valores ingresados están dentro del rango de 1 a 20
            if(n1>=1 && n1<=20){
                printf("\nIngrese el segundo número: ");
                scanf("%d",&n2);
                if(n2 >= max)
                    max=n2;

                 if(n2>=1 && n2<=20){
                    printf("\nIngrese el tercer número: ");
                    scanf("%d",&n3);
                    if(n3 >= max)
                        max=n3;

                    if(n3>=1 && n3<=20){
                        printf("\nIngrese el cuarto número: ");
                        scanf("%d",&n4);
                        if(n4 >= max)
                            max=n4;

                        if(n4>=1 && n4<=20){
                            printf("\nIngrese el quinto número: ");
                            scanf("%d",&n5);
                            if(n5 >= max)
                                max=n5;

                            if(n5>=1 && n5<=20){
                                printf("\nIngrese el sexto número: ");
                                scanf("%d",&n6);
                                if(n6 >= max)
                                    max=n6;

                                    if(n6>=1 && n6<=20){
                                        printf("\nIngrese el séptimo número: ");
                                        scanf("%d",&n7);
                                        if(n7 >= max)
                                            max=n7;


                                        if(n7>=1 && n7<=20){
                                            printf("\nIngrese el octavo número: ");
                                            scanf("%d",&n8);
                                            if(n8 >= max)
                                            max=n8;

                                            if(n8>=1 && n8<=20){
                                                printf("\nIngrese el noveno número: ");
                                                scanf("%d",&n9);
                                                if(n9 >= max)
                                                    max=n9;

                                                if(n9>=1 && n9<=20){
                                                    printf("\nIngrese el décimo número: ");
                                                    scanf("%d",&n10);
                                                    printf("\n");
                                                    if(n10 >= max)
                                                        max=n10;

                                                        //Aquí comienzan las sentencias después del control del rango de numeros
                                                        if(n10>=1 && n9<=10){

                                                           for(max; max>=1;max--){

                                                                if(n1-max >=0)printf("*\t");
                                                                else printf(" \t");

                                                                if(n2-max >=0)printf("*\t");
                                                                else printf(" \t");

                                                                if(n2-max >=0)printf("*\t");
                                                                else printf(" \t");

                                                                if(n3-max >=0)printf("*\t");
                                                                else printf(" \t");

                                                                if(n5-max >=0)printf("*\t");
                                                                else printf(" \t");

                                                                if(n6-max >=0)printf("*\t");
                                                                else printf(" \t");

                                                                if(n7-max >=0)printf("*\t");
                                                                else printf(" \t");

                                                                if(n8-max >=0)printf("*\t");
                                                                else printf(" \t");

                                                                if(n9-max >=0)printf("*\t");
                                                                else printf(" \t");

                                                                if(n10-max >=0)printf("*\t");
                                                                else printf(" \t");

                                                                printf("\n");


                                                           }

                                                           printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10);
                                                    }
                                                    else printf("\nNúmero fuera de rango!\a");
                                                }
                                                else printf("\nNúmero fuera de rango!\a");
                                            }
                                            else printf("\nNúmero fuera de rango!\a");
                                        }
                                        else printf("\nNúmero fuera de rango!\a");
                                    }
                                    else printf("\nNúmero fuera de rango!\a");
                                }
                                else printf("\nNúmero fuera de rango!\a");
                            }
                            else printf("\nNúmero fuera de rango!\a");
                        }
                        else printf("\nNúmero fuera de rango!\a");
                    }
                    else printf("\nNúmero fuera de rango!\a");
                }
                else printf("\nNúmero fuera de rango!\a");

        printf("\n");
        printf("INTRODUCCIÓN A LA PROGRAMACIÓN-DIEGO RICARDO DELGADILLO GÓMEZ 1MM1\n");
        system("pause");

        return 0;
}
















