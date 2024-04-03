#include<stdio.h>
#include<locale.h>


int main(){
    int a,b,c,d;
    setlocale(LC_CTYPE,"spanish");

    printf("Resultado = %d", 9!=7);
    printf(" 80 < 100 = %d", 80<100);

    /*
    mayor = (a>b) ? a:b; /*Mayor de a y b*/


    printf("\nEste programa determina el numero menor de 3 números: \n");
    printf("\nIngrese el primer número: ");
    scanf("%d", &a);

    printf("\nIngrese el segundo número: ");
    scanf("%d", &b);

    printf("\nIngrese el tercer número: ");
    scanf("%d",&c);

    d = (a<b)? a:b;
    d = (d<c)? d:c;

    printf("\nEl número menor es = %d\a", d);


    return 0;
}






