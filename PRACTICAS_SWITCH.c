#include<stdio.h>
#include<locale.h>

//Este programea es de practica para lka materia de introduccion a la programacion
//su objetivo es mostrar el numero que se ah digitado
//la sentencia switch solo aplica para datos entreros y de tipo char

int main(){

    //Declarando variables
    int numero;
    char vocal;


    setlocale(LC_CTYPE,"spanish");
/*
    printf("Digite un n�mero entre (1 y 3): ");
    scanf("%i",&numero);

    switch(numero){
        case 1: printf("\nEs el n�mero 1");break;
        case 2: printf("\nEs el n�mero 2\n");break;
        case 3: printf("\nEs el n�mero 3\n");break;

        default: printf("No ha digitado un n�mero correcto!\a");
    }
*/
    printf("Digite una vocal: ");
    scanf("%c",&vocal);

    switch(vocal){
        case 'a': printf("\n vocal a ");break;
        case 'e': printf("\n vocal e");break;
        case 'i': printf("\n vocal i");break;
        case 'o': printf("\n vocal o");break;
        case 'u': printf("\n vocal u");break;

        default: printf("\n Se quivoc�, esto no es una vocal!");
    }





    return 0;
}
