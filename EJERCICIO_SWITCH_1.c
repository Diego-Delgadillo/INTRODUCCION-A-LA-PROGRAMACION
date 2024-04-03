#include<stdio.h>
#include<locale.h>

//Programa para leer el año

int main(){
    setlocale(LC_CTYPE,"spanish");
    printf("Este programa muestra los días del mes.\n");

    int mm, aa, dd;

    printf("MES: ");
    scanf("%d", &mm);

    printf("DÍA: ");
    scanf("%d", &dd);

    printf("AÑO: ");
    scanf("%d", &aa);

    switch(mm){

        //ENERO
        case 1: dd=31;
            break;

        //FEBRERO
        case 2: if((aa%4==0) && (aa%100!=0) || (aa%400==0))
                dd=29;
            else
                dd=28;
            break;

        //MARZO
        case 3: dd=31;
            break;

        //ABRIL
        case 4: dd=30;
            break;

        //MAYO
        case 5: dd=31;
            break;

        //JUNIO
        case 6: dd=30;
            break;

        //JULIO}
        case 7: dd=31;
            break;

        //AGOSTO
        case 8: dd=31;
            break;

        //SEPTIEMBRE
        case 9: dd=30;
            break;

        //OCTUBRE
        case 10: dd=31;
            break;

        //NOVIEMBRE
        case 11: dd=30;
            break;

        //DICIEMBRE
        case 12: dd=31;
            break;

        default: printf("\nEl mes no es válido\n\n");
            break;

    }


    if(mm>= 1 && mm<=12){
        printf("Mes: %d del año:%d, tiene %d días\n", mm,aa,dd);
    }


    return 0;
}

















