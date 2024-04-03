#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
    setlocale(LC_CTYPE,"spanish");
    char cadena[40] ="abcd";
    int longitud;


    printf("%s",cadena);
    printf("\n%c",cadena[1]);

    printf("\n Ingresa nueva cadena: ");
    gets(cadena);
    puts(cadena);

    //scanf("%S",cadena);
    //printf("\nCadena= %s",cadena);

    //char nombre[41];
    //printf("\nEscribe tu nombre:");
    //scanf("%s",nombre);
    //printf("\n%s",nombre);


    char cadena2[3][100];
    printf("\nIngresa tu nombre: ");
    gets(cadena2[0]);
    printf("Ingesa tu apellido paterno: ");
    gets(cadena2[1]);
    printf("Ingresa tu apellido materno:");
    gets(cadena2[2]);

    //Añade la cadena 2 a la cadena1 y termina la cadena resultante con el caracter nulo y devuelve un punteroa  cadena 1
    strcat(cadena2[0],cadena2[1]);
    strcat(cadena2[0],cadena2[2]);
    puts(cadena2[0]);

    longitud=strlen(cadena2[0]);
    printf("\n%d",longitud);

    //strupr(cadena2[0]);
    //puts(cadena2[0]);
    strlwr(cadena2[0]);
    puts(cadena2[0]);
    strnset(cadena2[0],'ñ',5);
    puts(cadena2[0]);












}


















