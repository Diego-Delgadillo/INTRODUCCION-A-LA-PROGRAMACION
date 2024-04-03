#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

    setlocale(LC_CTYPE, "Spanish"); // configuración que permite mostrar en pantalla acentos y ñ

    //Declaramos variables

    int correct_password = 80523;
    int password;
    float menor, mayor, media, coeficiente1, coeficiente2, coeficiente3;
    float v1, v2, v3, v4, v5, v6, v7, v8, v9, v10;

    printf("Ingrese la contraseña: ");
    scanf("%d", &password);


    //Comprueba si es correcta la contraseña
    if(password == 80523){
        printf("La contraseña es correcta! \n");

        //Captura voltajes
        printf("\nIngrese el voltaje 1: ");
        scanf("%f", &v1);

        printf("Ingrese el voltaje 2: ");
        scanf("%f", &v2);

        printf("Ingrese el voltaje 3: ");
        scanf("%f", &v3);

        printf("Ingrese el voltaje 4: ");
        scanf("%f", &v4);

        printf("Ingrese el voltaje 5: ");
        scanf("%f", &v5);

        printf("Ingrese el voltaje 6: ");
        scanf("%f", &v6);

        printf("Ingrese el voltaje 7: ");
        scanf("%f", &v7);

        printf("Ingrese el voltaje 8: ");
        scanf("%f", &v8);

        printf("Ingrese el voltaje 9: ");
        scanf("%f", &v9);

        printf("Ingrese el voltaje 10: ");
        scanf("%f", &v10);

        //Esto evalua para encontrar el numero mayor
        mayor = (v1 > v2)? v1 : v2;
        mayor = (v3 > mayor)? v3 : mayor;
        mayor = (v4 > mayor)? v4 : mayor;
        mayor = (v5 > mayor)? v5 : mayor;
        mayor = (v6 > mayor)? v6 : mayor;
        mayor = (v7 > mayor)? v7 : mayor;
        mayor = (v8 > mayor)? v8 : mayor;
        mayor = (v9 > mayor)? v9 : mayor;
        mayor = (v10 > mayor)? v10 : mayor;

        //Esto es para encontrar el numero menor
        menor = (v1 < v2)? v1 : v2;
        menor = (v3 < menor)? v3 : menor;
        menor = (v4 < menor)? v4 : menor;
        menor = (v5 < menor)? v5 : menor;
        menor = (v6 < menor)? v6 : menor;
        menor = (v7 < menor)? v7 : menor;
        menor = (v8 < menor)? v8 : menor;
        menor = (v9 < menor)? v9 : menor;
        menor = (v10 < menor)? v10 : menor;

    printf("\nEl número mayor es: %.3f\n",mayor);
    printf("\nEl número menor es: %.3f\n",menor);

    //Para calcular el coeficiente de asimetria de fisher

    media = (v1+v2+v3+v4+v5+v6+v7+v8+v9+v10)/(10.0);

    coeficiente1 = (1.0/10.0)*(pow(v1-media,3)+pow(v2-media,3)+pow(v3-media,3)+pow(v4-media,3)+pow(v5-media,3)+pow(v6-media,3)+pow(v7-media,3)+pow(v8-media,3)+pow(v9-media,3)+pow(v10-media,3));


    coeficiente2 = (sqrt(pow((1.0/10.0)*((pow(v1-media,2)+pow(v2-media,2)+pow(v3-media,2)+pow(v4-media,2)+pow(v5-media,2)+pow(v6-media,2)+pow(v7-media,2)+pow(v8-media,2)+pow(v9-media,2)+pow(v10-media,2))),3)));


    coeficiente3 = (coeficiente1)/(coeficiente2);

    printf("\nEl Coeficiente de Fisher = %f", coeficiente3);

    //Esto muestra la clasificacion en la pantalla

    if(coeficiente3 >= -0.5 && coeficiente3 <= 0.5 ){
        printf("\nLa clasificación es simétrica,los sensores funcionan correctamente!\n");
        printf("\nAhora pueden ser instalados.\n");
    }

        else{
            if(coeficiente3 < -0.5){
                printf("\nLa clasificación es asimétrica hacia la izquierda!\n");
                printf("\nPor lo tanto no pueden ser instalados los sensores.\n");
            }

                else{
                    printf("\nLa clasificación es asimétrica hacia la derecha!\n");
                    printf("\nPor lo tanto no pueden ser instalados los sensores.\n");
                }
        }

    printf("\nINTRODUCCIÓN A LA PROGRAMACIÓN\n");
    printf("\nDIEGO RICARDO DELGADILLO GÓMEZ - 1MM1\n");
    printf("\nNO. DE BOLETA: 2024680051\n");

    }
    else{
        printf("¡Contraseña incorrecta! \a");

    }

}
