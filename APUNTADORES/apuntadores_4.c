#include <stdio.h>


int main()
{
    char *nombre = "Francisco Javier"; // apuntador a una cadena de caracteres
    char cadena[]= "Marco Antonio"; // un arreglo tipo char con una cadena de caracteres asignada
    char *q; // se declara un apuntador tipo char
    q = cadena; // el apuntador se direcciona al arreglo tipo char
    q[7]='u'; // Se cambian letras de cadena
    q[8]='r';
    q[9]='e';
    q[10]='l';
    printf("%s \n", nombre); // Se muestran en pantalla los de caracteres a partir del apuntador nombre
    printf("%s", cadena); // Se muestran en pantalla la cadena modificada
    }
