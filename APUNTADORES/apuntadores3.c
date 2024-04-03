#include <stdio.h>

int main()
{
    int lista[] = {24, 30, 15, 45, 34};
    int *plista = &lista[0];
    for (int ind = 0; ind < 5; ind++)
    printf("%d\t", *(plista + ind));
}
