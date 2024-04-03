#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){

/*Crearás
una estructura que contenga miembros que puedan captar el nombre
de un alumno y su calificación de 4 materias
Después el usuario ingresará el nombre y la calificación por
materia Mostrarásen pantalla el nombre y promedio del alumno*/

    setlocale(LC_CTYPE,"spanish");


struct alumno{
    char nombre[40];
    float cal1;
    float cal2;
    float cal3;
    float cal4;
    float promedio;
};
    struct alumno diego;

    printf("Ingresa tu nombre completo: \n");
    gets(diego.nombre);
    for(int i=0;diego.nombre[i]!=0;i++){diego.nombre[i]=toupper(diego.nombre[i]);};


    printf("Ingresa la primer calificación: \n");
    scanf("%f\n",&diego.cal1);

    printf("Ingresa la segunda calificación: \n");
    scanf("%f\n",&diego.cal2);

    printf("Ingresa la tercer calificación: \n");
    scanf("%f\n",&diego.cal3);

    printf("Ingresa la cuarta calificación: \n");
    scanf("%f\n",&diego.cal4);

    diego.promedio=((diego.cal1+diego.cal2+diego.cal3+diego.cal4)/4);

    printf("\n");
    printf("ALUMNO: %s\n",diego.nombre);
    printf("SU PROMEDIO ES: %f\n",diego.promedio);










}

