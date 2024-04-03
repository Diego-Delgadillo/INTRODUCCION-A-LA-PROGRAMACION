#include <stdio.h>
#include <locale.h>
// Programa que calcula mis ingresos y gastos mensuales
// y me dice si estoy dentro del presupuesto
int main()
{
    setlocale(LC_CTYPE, "Spanish"); // configuración que permite mostrar en pantalla acentos y ñ

        printf("Este programa calculará mis ingresos y gastos mensuales \n");
        printf("y me dirá si estoy dentro del presupuesto\n\n");

    float ingreso = 0.0;

        printf("Ingreso al Mes = $");
        scanf("%f", &ingreso);
        printf("\n");

    float Transp = 0; // variable de transporte

        printf("Gastos de Transporte por día, ida y vuelta = $");
        scanf("%f", &Transp);
        Transp = Transp * 30;
        printf("\n");

    float Des = 0; // variable de desayuno

        printf("Gastos de Desayuno por día = $");
        scanf("%f", &Des);
        Des = Des * 30;
        printf("\n");

    float Com = 0; // variable de comida

        printf("Gastos de Comida por día = $");
        scanf("%f", &Com);
        Com = Com * 30;
        printf("\n");

    float Snack = 0; // variable de snacks
        printf("Gastos de Snacks por semana = $");
        scanf("%f", &Snack);
        Snack = Snack * 4;
        printf("\n");

    float Entre = 0; // variable de Entretenimiento

        printf("Gastos de Entretenimiento por semana = $");
        scanf("%f", &Entre);
        Entre = Entre * 4;
        printf("\n");

        float SumaGastos = 0;
        float Total = 0;

        // suma de gastos y total
        SumaGastos = Transp + Des + Com + Snack + Entre;
        Total = ingreso - SumaGastos;

        // utilizamos if else para mostrar el resultado indicado
        if (Total >= 0)
            printf("Mis gastos $%f SI están dentro de mi presupuesto de $%f y me sobran $%f \n", SumaGastos, ingreso, Total);
        else
            printf("Mis gastos $%f NO están dentro de mi presupuesto de $%f y me faltan $%f \n", SumaGastos, ingreso, Total);
}
