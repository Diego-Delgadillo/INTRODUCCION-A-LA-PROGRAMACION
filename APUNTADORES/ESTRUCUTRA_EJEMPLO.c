#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){

/*Crear�s
una estructura que contenga miembros que puedan captar el nombre
de un alumno y su calificaci�n de 4 materias
Despu�s el usuario ingresar� el nombre y la calificaci�n por
materia Mostrar�sen pantalla el nombre y promedio del alumno*/

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


    printf("Ingresa la primer calificaci�n: \n");
    scanf("%f\n",&diego.cal1);

    printf("Ingresa la segunda calificaci�n: \n");
    scanf("%f\n",&diego.cal2);

    printf("Ingresa la tercer calificaci�n: \n");
    scanf("%f\n",&diego.cal3);

    printf("Ingresa la cuarta calificaci�n: \n");
    scanf("%f\n",&diego.cal4);

    diego.promedio=((diego.cal1+diego.cal2+diego.cal3+diego.cal4)/4);

    printf("\n");
    printf("ALUMNO: %s\n",diego.nombre);
    printf("SU PROMEDIO ES: %f\n",diego.promedio);










}

