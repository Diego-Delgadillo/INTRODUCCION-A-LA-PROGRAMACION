#include <stdio.h>
#include <locale.h>
// if-else - Menor de tres n�meros a, b y c
int main()
{
setlocale(LC_CTYPE, "Spanish"); // configuraci�n que permite mostrar en pantalla acentos y �
    float a, b, c, menor;

        printf("Este programa muestra el n�mero menor de 3 que ingresar� el usuario\n");
        printf("Ingresa el primer n�mero: ");
        scanf("%f", &a);
        printf("Ingresa el segundo n�mero: ");
        scanf("%f", &b);
        printf("Ingresa el tercer n�mero: ");
        scanf("%f", &c);

    if (a < b)
        if (a < c)
            menor = a;

    else
        menor = c;

    else
        if (b < c)
            menor = b;
    else
        menor = c;
        printf("El n�mero menor es = %.2f", menor);
}
