#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

int main(){

    setlocale(LC_CTYPE,"spanish");
    //Declaramos las variables
    int contra = 89672;
    float estatura = 0;
    float peso = 0;
    float imc = 0;
    int imc2 = 0;
    int subir = 0;
    int bajar = 0;

    printf("Esta calculadora es para adultos de 20 años o más");

    do
    {
      printf("\nIngresa tu contraseña: ");
      scanf("%d",&contra);
      printf("\n");

    }

    while(contra!=89672);
            printf("\nContraseña correcta!\n");

            printf("\nIngrese su estatura en metros: ");
            scanf("%f",&estatura);

            printf("\nIngrese su peso en kilos: ");
            scanf("%f",&peso);


            imc = (peso)/(pow(estatura,2.0));
            printf("\nSu IMC es de: %.2f ",imc);

            imc2 = floor(imc);
            printf("%d",imc2);


            switch(imc2){

                case 1:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 2:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 3:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 4:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 5:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 6:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 7:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 8:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 9:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 10:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 11:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 12:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 13:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 14:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 15:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 16:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 17:
                    printf("Usted cuenta con peso insuficiente"); break;
                case 18:
                    printf("Usted cuenta con Normopeso");break;
                case 19:
                    printf("Usted cuenta con Normopeso"); break;
                case 20:
                    printf("Usted cuenta con Normopeso"); break;
                case 21:
                    printf("Usted cuenta con Normopeso"); break;
                case 22:
                    printf("Usted cuenta con Normopeso"); break;
                case 23:
                    printf("Usted cuenta con Normopeso"); break;
                case 24:
                    printf("Usted cuenta con Normopeso"); break;
                case 25 :
                    printf("Usted cuenta con Normopeso"); break;
                case 26:
                    printf("Usted cuenta con Sobrepeso grado 1"); break;
                case 27 :
                    printf("Sobrepeso grado II (preobesidad)"); break;
                case 28:
                    printf("Sobrepeso grado II (preobesidad)"); break;
                case 29 :
                    printf("Sobrepeso grado II (preobesidad)"); break;
                case 30:
                    printf("Obesidad de tipo I"); break;
                case 31:
                    printf("Obesidad de tipo I"); break;
                case 32:
                    printf("Obesidad de tipo I"); break;
                case 33:
                    printf("Obesidad de tipo I"); break;
                case 34:
                    printf("Obesidad de tipo I"); break;
                case 35:
                    printf("Obesidad de tipo II"); break;
                case 36:
                    printf("Obesidad de tipo II"); break;
                case 37:
                    printf("Obesidad de tipo II"); break;
                case 38:
                    printf("Obesidad de tipo II"); break;
                case 39:
                    printf("Obesidad de tipo II"); break;
                case 40:
                    printf("Obesidad de tipo III (mórbida)"); break;
                case 41:
                    printf("Obesidad de tipo III (mórbida)"); break;
                case 42:
                    printf("Obesidad de tipo III (mórbida)"); break;
                case 43:
                    printf("Obesidad de tipo III (mórbida)"); break;
                case 44:
                    printf("Obesidad de tipo III (mórbida)"); break;
                case 45:
                    printf("Obesidad de tipo III (mórbida)"); break;
                case 46:
                    printf("Obesidad de tipo III (mórbida)"); break;
                case 47:
                    printf("Obesidad de tipo III (mórbida)"); break;
                case 48:
                    printf("Obesidad de tipo III (mórbida)"); break;
                case 49:
                     printf("Obesidad de tipo III (mórbida)"); break;

                default: printf("\nFuera de rango!");
                }


              while(imc < 18 || imc>24){
                    if(imc<18){
                        peso=peso+1;
                        imc=peso/(estatura*estatura);
                        subir++;
                    }

                    else{
                        peso=peso-1;
                        imc=peso/(estatura*estatura);
                        bajar++;
                    }
              }

              if(imc2<18){
                printf("\nTiene que subir %d kilos para llegar a normopeso",subir);
              }
              if(imc2>24){
                printf("\nTiene que bajar %d kilos para llegar a normopeso",bajar);
              }

              printf("\nDIEGO RICARDO DELGADILLO GÓMEZ-1MM1");
              system("pause");






    return 0;
}



















