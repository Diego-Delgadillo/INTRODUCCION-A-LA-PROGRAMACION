#include <stdio.h>

int main()
{
    int lista[2][3] = {24, 30, 15, 45, 34, 40};
    int *plista = &lista[0][0];
    for (int i = 0; i<6; i++)
    printf("%d ", *(plista + i));
}
