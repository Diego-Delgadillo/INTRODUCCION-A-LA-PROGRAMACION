#include\ <stdio.h>
#include <locale.h>
// else-if - Cantidad a pagar en función de la comprada
int main()
{
setlocale(LC_CTYPE, "Spanish"); // configuración que permite mostrar en pantalla acentos y ñ
    int cc;
    float PrecioU, Desc, Total;

    printf("Este programa calcula descuentos en función de la cantidad comprada \n");
    printf("Cantidad Comprada = "); scanf("%d", &cc);
    printf("Precio Unitario = "); scanf("%f", &PrecioU);

    if (cc >= 100)
        Desc = 40.0f;

    else if (cc >=25)
        Desc = 20.0f;

    else if (cc >=10)
        Desc = 10.0f;

    else
        Desc = 0.0f;
        printf("Descuento = %.2f\n", Desc);
        Total = cc * PrecioU * (1 - Desc/100);
        printf("Total = %.2f\n", Total);
}
