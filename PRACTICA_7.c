#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){

    //declarando las variables
    int password = 12345;
    int contador = 5;
    char uno ='1';
    char dos ='2';
    char tres ='3';
    int contador2 = 0;


    setlocale(LC_CTYPE,"spanish");

    //parte 1
    printf("1.Crear�s un control de acceso mediante una contrase�a num�rica, el usuario tendr� s�lo 5 oportunidades\n   ");

    do{

    printf("\nIngrese la contrase�a: ");
    scanf("%d",&password);
    contador -=1;
        if(password == 12345){
            printf("\nLa contrase�a es Correcta!\n");
            goto parte2;


        }
        else{ printf("\nIntente de nuevo!\n\a");}
            printf("\nLe quedan %d intentos",contador);
    }

    while(contador>0);{
        printf("\nPrograma terminado, excediste las oportunidades de ingresar correctamente la contrase�a\a�.");
        goto salida;


    }



    //parte 2
    //Etiqueta que sigue despues de ingresar corectamente la contrae�a
    parte2:
        printf("\n2.En una escuela secundaria hay 6 grupos por grado. Deber�s imprimir en pantalla los 18 grupos\n");

        //for para las filas de grupos
        for(int i=1;i<=3;i++){

            for(char letra=65; letra<=70; letra++){
                printf("%d%c\t ",i,letra);

            }
            printf("\n");

        }

        //parte 3
        printf("\n3.Los grupos que asistir�n a la Expo Inform�tica son todos los grupos A, B y C, ya que estos tienen");
        printf("en taller de inform�tica.\n");
        for(int i=1;i<=3;i++){

            for(char letra=65; letra<=70; letra++){
                printf("%d%c\t ",i,letra);

                if(letra>=67){
                break;
                }
            }
            printf("\n");
        }

        //parte4
        printf("\n4.Los grupos que obtendr�n premio de excelencia\n");

        for(int i=1;i<=3;i++){

            for(char letra=65; letra<=70; letra++){
                //este switch es para que no se imprima "2B" ni "3E"
                switch(i){
                    //en caso de que i sea=2 y letra sea B
                    case 2:
                        if(letra==66)
                            //sigue el siguiente iterador
                            continue;
                    //en caso de que i sea=3 y la letra sea E
                    case 3:
                        if(letra==69)
                            continue;
                    default:printf("%d%c\t ",i,letra);
                    }
            }
            printf("\n");
        }

        //Parte 5
        printf("\n5.En forma ordenada comenzando desde 1A, solo podr�n asistir 9 grupos a la ceremonia con autoridades del Estado\n");
         for(int i=1;i<=3;i++){

            for(char letra=65; letra<=70; letra++){
                    printf("%d%c\t ",i,letra);
                    if(i==2 && letra==67)
                        goto salida;
            }
            printf("\n");
        }

        salida: printf("\nSon todas las actividades por grupos\n");
                printf("\nINTRODUCCI�N A LA PRGORAMACI�N DIEGO RICARDO DELGADILLO G�MEZ-1MM1\n");
                system("pause");


}
