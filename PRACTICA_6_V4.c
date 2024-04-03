#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_CTYPE,"spanish");

    //el minimo es 1 y el maximo 100
    int min=1, max=0;
    int n, suma=0;

    printf("Introduce 10 números entre 1 y 20: ");

    for(int i=0; i<10; i++){
        scanf("%d",&n);

        if(n <=min)
            min = n;


        if(n >= max)
            max = n;

        suma +=n;
    }

    printf("\nMínimo: %d",min);
    printf("\nMáximo: %d",max);



    return 0;
}
