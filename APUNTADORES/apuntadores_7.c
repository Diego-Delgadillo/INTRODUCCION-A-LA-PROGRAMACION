#include <stdio.h>
int main() {

    int i, j;
    int a[5][5]; // matriz de dos dimensiones
    int *p[5]; // matriz de punteros
    int **q; // puntero a puntero a un entero
    for (i = 0; i < 5; i++)
    p[i] = a[i]; // asignar a p las filas de a
    q = p;
    printf("Ingresa valores enteros de una matriz de 5 x 5\n\n");
    for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++) {
    printf("a[%d][%d] = ",i,j);
    scanf("%d", &q[i][j]); }
    printf("\n\n");
    for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++)
    printf("%d \t", q[i][j]);
    printf("\n");
}}
