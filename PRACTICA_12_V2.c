#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>

int again_1, again_2, resp, j;

int main(){

setlocale(LC_CTYPE, "spanish");

borrar:
system("cls");

printf("Este programa tiene 2 funciones");
printf("\n\n1. Creación de RFC");
printf("\n2. Multiplos en tablas de multiplicar");

int opcion;
printf("\n\nIngrese una opción: ");
scanf("%d", &opcion);

switch(opcion){

case 1:
    rstrt:

    printf("\n\n1. Codificacion de RFC.");
    printf("\nPara codificar tu RFC necesitare tu nombre completo y tu fecha de nacimiento");
    printf("\n(Todo con mayusculas y sin espacios)");

    char *ap1 = (char *)malloc(25 * sizeof(char));
    printf("\n\nIngrese su apellido paterno: ");
    scanf("%s", ap1);

    char *ap2 = (char *)malloc(25 * sizeof(char));
    printf("\nIngrese su apellido materno: ");
    scanf("%s", ap2);

    char *nombre = (char *)malloc(20 * sizeof(char));
    printf("\nIngrese su nombre: ");
    scanf("%s", nombre);

    char num_a[4];
    char *a=num_a;
    printf("\nIngrese el año de nacimiento: ");
    scanf("%s", a);

    char num_mes[4];
    char *mes=num_mes;
    printf("\nIngrese el mes en el que nacio (2 dígitos): ");
    scanf("%s", mes);

    char num_dia[4];
    char *dia=num_dia;
    printf("\nIngrese el dia en el que nacio (2 dígitos): ");
    scanf("%s", dia);

    printf("\n\nEl RFC es: ");
    char *b;
    b=ap1;
    toupper(b[0]);
    printf("%c", b[0]);
    char *b1;
    b1=ap1;
    toupper(b1[0]);
    printf("%c", b1[1]);
    char *c;
    c=ap2;
    printf("%c", c[0]);
    char *d;
    d=nombre;
    printf("%c", d[0]);
    char *e;
    e=a;
    printf("%c%c", e[2], e[3]);
    char *e1;
    e1=mes;
    printf("%c%c", e1[0], e1[1]);
    char *e2;
    e2=dia;
    printf("%c%c", e2[0], e2[1]);

    printf("\n\nDesea repetir la accion? (1), desea ir al menu? (2), desea terminar el programa (0): ");
    scanf("%d", &resp);

    if(resp==1)
        goto rstrt_2;
    if(resp==2)
        goto borrar;
    if(resp==0)
        goto bye;

    break;

case 2:
    rstrt_2:

    printf("\n\n2. Multiplos de una matriz");
    printf("\nIngrese un multiplo: ");
    int multiplo;
    scanf("%d", &multiplo);


    printf("\nTabla original: \n\n");
    int tabla[10][10];
    int *apt1[10];
    int **apt2;

    for(int i=0; i<10; i++)
        apt1[i]=tabla[i];
    apt2=apt1;

    for(int i=0; i<10; i++){
        for(j=0; j<10; j++){
            apt1[i][j]=(i+1)*(j+1);
            printf("%d\t", apt1[i][j]);
        }
        printf("\n");
    }

    printf("\n\nTabla modificada: \n\n");
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
                if(apt2[i][j] % multiplo==0){
                    apt2[i][j]=apt2[i][j]+1;
                }
                printf("%d\t", apt2[i][j]);
        }
        printf("\n");
    }



    printf("\n\nDesea repetir la accion? (1), desea ir al menu? (2), desea terminar el programa (0): ");
    scanf("%d", &resp);

    if(resp==1)
        goto rstrt_2;
    if(resp==2)
        goto borrar;
    if(resp==0)
        goto bye;

    break;

}
bye:
printf("\n\nPrograma terminado!\n\n");

}


