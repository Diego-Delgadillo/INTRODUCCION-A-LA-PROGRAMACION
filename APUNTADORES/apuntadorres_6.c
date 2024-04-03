#include <stdio.h>


int main(){
    int a[5][5]; // matriz de dos dimensiones
    int *p[5]; // matriz de punteros a int
    for (int i = 0; i < 5; i++)
    p[i] = a[i]; // asignar a p las filas de a
    printf("Ingresa valores enteros de una matriz de 5 x 5\n\n");
    for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++) {
    printf("a[%d][%d] = ",i,j);
    scanf("%d", &p[i][j]); }
    printf("\n\n");
    for (int i = 0; i < 5; i++){

    for (int j = 0; j < 5; j++)
        printf("%d \t", p[i][j]);
        printf("\n");
    }
}
