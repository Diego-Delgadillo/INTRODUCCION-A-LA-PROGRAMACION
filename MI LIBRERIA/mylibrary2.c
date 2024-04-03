#include<stdio.h>
#include<math.h>
#include"mylibrary2.h"


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

    //funcion si parametros de regreso
    void mensaje(){
        printf("\n");
        printf("INTRODUCCIÓN A LA PROGRAMACIÓN\n");
        printf("DIEGO RICARDO DELGADILLO GÓMEZ\n");
        printf("2024680051\n");
    }


    //Esta funcion de la libreria es para calcular los valores de una ecuacion de sefundo grado



    float SegundoGradoP(float a,float b,float c)
    {
        float raizPostiva=((-b)+(sqrt(pow(b,2)-(4.0*a*c))))/(2.0*a);
        return raizPostiva;
    }

    float SegundoGradoN(float a,float b, float c)
    {
        float raizNegativa=((-b)-(sqrt(pow(b,2)-(4.0*a*c))))/(2.0*a);
        return raizNegativa;
    }

