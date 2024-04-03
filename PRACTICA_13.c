#include <stdio.h>
#include <locale.h>


int main(){
        struct datos
    {
    int boleta,califinal,alumnos,nolista;
    char grupo[200],nombre[200],apellidop[200],apellidom[200];
    };


    setlocale(LC_CTYPE,"Spanish");

    printf("Mostrar calificaciones\n");
    struct datos mmm1;
    printf("Grupo:\n");
    scanf("%s",&mmm1.grupo);

    int n;
    printf("¿Cuantos alumnos desea ingresar?\n");
    scanf("%d",&n);
    while(n<0){
    printf("Ingrese un valor correcto: ");
    scanf("%d",&n);
    }
    struct datos control[n];

    printf("\n\n");


    for(int i=0;i<n;i++)
    {
    printf("Ingrese alumno %d: \n",i+1);
    printf("Ingrese el numero de lista: ");
    scanf("%d",&control[i].nolista);
    printf("\n");
    printf("Ingrese el nombre: ");
    scanf("%s",&control[i].nombre);
    printf("\n");
    printf("Ingrese el apellido paterno: ");
    scanf("%s",&control[i].apellidop);
    printf("\n");
    printf("Ingrese el apellido materno: ");
    scanf("%s",&control[i].apellidom);
    printf("\n");
    printf("Ingrese numero de boleta: ");
    scanf("%d",&control[i].boleta);
    printf("\n");
    printf("Ingrese la calificacion final: ");
    scanf("%d",&control[i].califinal);
    printf("\n");
    }


    printf("Para el grupo ");
    printf("%s",mmm1.grupo);
    printf("\n");
    printf("\n");
    printf("\n");

    printf("No.lista     nombre        apellido P.     apellido M.      cuenta    Calif.\n");
    for(int i=0;i<n;i++)
    {
    printf("    ");
    printf("%d",control[i].nolista);
    printf("        ");
    printf("%s",control[i].nombre);
    printf("         ");
    printf("%s",control[i].apellidop);
    printf("        ");
    printf("%s",control[i].apellidom);
    printf("         ");
    printf("  ");
    printf("%d",control[i].boleta);
    printf("        ");
    printf("%d",control[i].califinal);
    printf("\n");
    }


    float caf=0;
    for(int i=0;i<n;i++)
    {
    caf+=control[i].califinal;
    }
    float pg;
    pg=caf/n;

    int aprobados=0,reprobados=0;
    for(int i=0;i<n;i++)
    {
    if(control[i].califinal>=6)
    aprobados+=1;
    else if(control[i].califinal<6)
    reprobados+=1;
    }
    printf("promedio general: %g ",pg);
    printf("       Aprobadas %d      Reprobadas %d",aprobados,reprobados);


}




