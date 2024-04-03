#include<stdio.h>
#include<locale.h>
#include<math.h>
#include"mylibrary2.h"


//Codigo de la practica 10
/*
//creacion de la funcion del area del circulo
    float circulo(float a){
        // sus parametros son a (radio)
        //float resultado=0;
        //float pi=3.14159;
        float resultado = 0;
        resultado=(3.14159*(a*a));
        return resultado;
    }

    //funcion del areadel rectangulo
    float rectangulo(float x, float y){
        // sus parametros son a y b (base y altura)
        float resultado=0;
        resultado = x*y;
        return resultado;

    }

    //Funcion para el area de un triangulo
    float triangulo(float i, float j){
        // sus parametros son a y b (base y altura)
        float resultado=0;
        resultado=((i*j)/2);
        return resultado;
    }

    float material(float a, float b, float c, float d,float e){
        float area,gramos,costo = 0;
        area=(circulo(a)+rectangulo(b,c)+triangulo(d,e));
        gramos=(area*9.8);
        costo=(gramos*2000);

        printf("\nEl costo es: %G",costo);

    }

    void mensaje(){
        printf("\n");
        printf("INTRODUCCIÓN A LA PROGRAMACIÓN\n");
        printf("DIEGO RICARDO DELGADILLO GÓMEZ\n");
        printf("2024680051\n");
    }
*/

int main(){

    float a,b,c,d,e,f;

    setlocale(LC_CTYPE,"spanish");
    printf("Ingrese el radio del circulo: ");
    scanf("%f",&a);
    circulo(a);


    printf("Ingrese la base del rectángulo: ");
    scanf("%f",&b);
    printf("Ingrese el altura del rectángulo: ");
    scanf("%f",&c);
    rectangulo(b,c);


    printf("Ingrese la base del triangulo: ");
    scanf("%f",&d);
    printf("Ingrese el altura del triangulo: ");
    scanf("%f",&e);
    triangulo(d,e);

    material(a,b,c,d,e);
    mensaje();

    SegundoGradoN(5,2,3);

}
