#include<stdio.h>
#include<locale.h>
#include<ctype.h>

int main(){

    setlocale(LC_CTYPE,"spanish");

    //DECLARAMOS LOS APUNTADORES Y LOS ASOCIAMOS A LAS VARIABLES
    char nombre[20], *pnombre, nombre2;//araible de tipo cahr
    char apellidop[20], *papellidop;//araible de tipo cahr
    char apellidom[20], *papellidom;
    char anacimiento[3], *panacimiento;
    char mnacimiento[2], *pmnacimiento;
    char dnacimiento[2], *pdnacimiento;
    char *prfc[10];



    printf("Escribe tu nombre: ");
    gets(nombre);
    //ciclo para convertir a mayusculas
    for(int i=0;nombre[i]!=0;i++){nombre[i]=toupper(nombre[i]);pnombre = &nombre[i];}
    pnombre = nombre;
    nombre2=&*pnombre;

    printf("NOMBRE:%s \n",nombre);
    printf("%c",nombre2);


    printf("\nEscribe apellido paterno:\n");
    gets(apellidop);
    for(int i=0;apellidop[i]!=0;i++){apellidop[i]=toupper(apellidop[i]);}
    papellidop=apellidop;
    printf("%s\n",apellidop);

    printf("\nEscribe tu apellido materno: \n");
    gets(apellidom);
    for(int i=0;apellidom[i]!=0;i++){apellidom[i]=toupper(apellidom[i]);}
    papellidom=apellidom;
    printf("%s\n",apellidom);

    printf("\nEscribe tu año de nacimiento: \n");
    gets(anacimiento);
    panacimiento=anacimiento;
    printf("%s\n",anacimiento);

    printf("\nEscribe tu mes de nacimiento: \n");
    gets(mnacimiento);
    pmnacimiento=mnacimiento;
    printf("%s\n",mnacimiento);

    printf("Escribe tu día de nacimiento: \n");
    gets(dnacimiento);
    pdnacimiento=dnacimiento;
    printf("%s\n",dnacimiento);

    pnombre= &prfc[0,1];
    printf("%s",prfc);


    //segunda parte del codigo
    int m[10][10];
    int *mpm[10][10];

    //ciclo para ingresar filas y columnas
    for(int i=0;i<10;i++){
        m[i+1];
        for(int j=0;j<10;j++){
            m[j*2];
        }
    }

    for(int i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d",m[i][j];)
        }
    }





}
