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
        case 1:
            printf("Mes: ENERO");
            dd=31;
            break;

        //FEBRERO
        case 2: if((aa%4==0) && (aa%100!=0) || (aa%400==0)){
                    printf("Mes: FEBRERO");
                    dd=29;}
                else
                    dd=28;
            break;

        //MARZO
        case 3: dd=31;
            printf("Mes: MARZO");
            break;

        //ABRIL
        case 4: dd=30;
            printf("Mes: ABRIL");
            break;

        //MAYO
        case 5: dd=31;
            printf("Mes: MAYO");
            break;

        //JUNIO
        case 6: dd=30;
            printf("Mes: JUNIO");
            break;

        //JULIO}
        case 7: dd=31;
            printf("Mes: JULIO");
            break;

        //AGOSTO
        case 8: dd=31;
            printf("Mes: AGOSTO");
            break;

        //SEPTIEMBRE
        case 9: dd=30;
            printf("Mes: SEPTIEMBRE");
            break;

        //OCTUBRE
        case 10: dd=31;
            printf("Mes: OCTUBRE");
            break;

        //NOVIEMBRE
        case 11: dd=30;
            printf("Mes: NOVIEMBRE");
            break;

        //DICIEMBRE
        case 12: dd=31;
            printf("Mes: DICIEMBRE");
            break;

        default: printf("\nEl mes no es válido\n\n");
            break;

    }


    if(mm>= 1 && mm<=12){
        printf(",del año:%d, tiene %d días",aa,dd);
    }


    return 0;
}

















