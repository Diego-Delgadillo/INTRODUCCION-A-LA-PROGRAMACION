#include <stdio.h>
#include <locale.h> // Librería para configurar caracteres en español
// Llamado entre funciones
float CambioDolar()
{
    float TipoCambio = 19.96;
    return TipoCambio;
}
float Impuesto(int z)
{

    float nivel = 0.0;
        if (z >=1 && z<=3)
        nivel = 0.35; // 35 % de impuestos
        else if (z>=4 && z<=6)
        nivel = 0.45; // 45 % de impuestos
        else
        nivel = 0.15; // 15 % de impuestos
        return nivel;
    }

    float Mensual(int x, float y)
    {


    float resultado = 0;
    resultado = x * y;
    return resultado;
    }


    float SAT(int a, float b, int c)
    {
        float Total = 0;
        Total = Mensual(a, b) * Impuesto(c);
        return Total;
    }


    void mensajeC ()
    {
    printf("Estoy aprendiendo a crear mis propias funciones en C\n");
    }


int main()
{
    setlocale(LC_CTYPE, "Spanish");

    int dias = 0, zona = 0;
    float ingreso_diario = 0.0, ingreso_mensual = 0.0;
    float Cuota_sat = 0.0, Disponible = 0.0;
    float Disp_pesos = 0.0;


    printf("Ingresa días del mes = ");
    scanf("%d", &dias);
    printf("Ingresa ingreso por día = ");
    scanf("%f", &ingreso_diario);
    printf("Ingresa zona 1 - 10 = ");
    scanf("%d", &zona);

    ingreso_mensual = Mensual(dias, ingreso_diario);
    Cuota_sat = SAT(dias, ingreso_diario, zona);
    Disponible = ingreso_mensual - Cuota_sat;
    Disp_pesos = Disponible * CambioDolar();
    printf("Pocentaje de Impuestos = %c%G \n", '%' , 100*Impuesto(zona));
    printf("Ingreso Mensual = %G \n", ingreso_mensual);
    printf("Cuota para el SAT = %G \n", Cuota_sat);
    printf("Disponible en Dólares = %G \n", Disponible);
    printf("Disponible en Pesos = %G \n", Disp_pesos);
    mensajeC();
}
