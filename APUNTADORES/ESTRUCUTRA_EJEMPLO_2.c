#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE,"spanish");
    int num_alum;
    printf("�Cu�ntosalumnosdeseasingresar?=");
    scanf("%d",&num_alum);

struct alumno
{
    char nombre[40];
    int matematicas,quimica,fisica,humanidades;
    float promedio;

};

struct fecha_alta
{
   int dia,mes,anyo;
};


}



struct alumno salon1[num_alum];
    for(int i=0;i<num_alum;i++)
    {
        printf("Ingresa e lnombre del alumno:");
        fflush(stdin);
        gets(salon1[i].nombre);
        printf("\n�Cu�l es la fecha de ingreso?\n");
        printf("A�o(4 d�gitos)=");
        scanf("%d",&salon1[i].fecha_alta.anyo);
        printf("\nMes(2 d�gitos)=");
        scanf("%d",&salon1[i].fecha_alta.mes);
        printf("\nDia(2d�gitos)=");
        scanf("%d",&salon1[i].fecha_alta.dia);
        printf("\nIngresa la Calificaci�n de matem�ticas=");
        scanf("%d",&salon1[i].matematicas);
        printf("\nIngresa la Calificaci�n de qu�mica=");
        scanf("%d",&salon1[i].quimica);
        printf("\nIngresa la Calificaci�n de f�sica=");
        scanf("%d",&salon1[i].fisica);
        printf("\nIngresa la Calificaci�n de humanidades=");
        scanf("%d",&salon1[i].humanidades);
        salon1[i].promedio=(salon1[i].matematicas+salon1[i].quimica+salon1[i].fisica+salon1[i].humanidades)/4.0;
        printf("\n\nEl alumno %s tiene un promedio= %G\n",salon1[i].nombre,salon1[i].promedio);
        printf("Fecha de ingreso,A�o:%d,Mes:%d,D�a:%d\n\n\n",salon1[i].fecha_alta.anyo,salon1[i].fecha_alta.mes,salon1[i].fecha_alta.dia);
    }
}
