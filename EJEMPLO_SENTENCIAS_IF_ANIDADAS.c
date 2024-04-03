#include <stdio.h>
#include <locale.h>
// if-else - Menor de tres números a, b y c
int main()
{
setlocale(LC_CTYPE, "Spanish"); // configuración que permite mostrar en pantalla acentos y ñ
    float a, b, c, menor;

        printf("Este programa muestra el número menor de 3 que ingresará el usuario\n");
        printf("Ingresa el primer número: ");
        scanf("%f", &a);
        printf("Ingresa el segundo número: ");
        scanf("%f", &b);
        printf("Ingresa el tercer número: ");
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
        printf("El número menor es = %.2f", menor);
}
