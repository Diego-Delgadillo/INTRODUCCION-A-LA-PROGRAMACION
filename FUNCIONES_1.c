#include<stdio.h>
#include<locale.h>

//Aqui van las funciones
//vamos a ahcer una funcion llamada sumar
//Tiene parametros y retorna un valor


//CREAMOS LA FUNCION SUMA
float sumar(float x, float y){

    float suma = 0;
    suma = x+ y;
    return suma;

}

double planck(){
    double a=6.6260700E-34;
    return a;

}

void mensaje(){

    printf("Estoy aprendiendo a crear mis propias funciones en C\n");
}

int main(){

    setlocale(LC_CTYPE,"spanish");
    printf("\nEste programa realiza la suma de 2 n�meros\n");
    float a,b,c,d;

    printf("Ingrese el primer n�mero: ");
    scanf("%f",&a);

    printf("Igrese el segundo n�mero: ");
    scanf("%f",&b);

    c= sumar(a,b);

    printf("El resultado es: %G\n",c);



    d=sumar(a,b)*planck();
    printf("El resultado es= %G",d);
    mensaje();

    return 0;
}
