5#include<stdio.h>
#include<locale.h>
#include<practica11.h>
#include<stdlib.h>


int main(){
    //DIEGO RICARDO DELGADILLO G�MEZ

    int opcion=0;
    int opcion2;
    int salir;
    int ndatos;//variable para alamcenar numero de datos en la funcion 1
    int ndec;//variable para alamcenar numero de datos en la funcion 2




    setlocale(LC_CTYPE,"spanish");

    inicio:
    printf("\nEste programa tiene 3 funciones, ingrese la funci�n para ejecutar: \n");
    printf("\n1-Calcular el coeficiente de fisher.\n");
    printf("\n2-Convertir n�meros decimales a binarios\n");
    printf("\n3-Histograma de 10 n�meros\n");
    printf("\nIngrese una opci�n: \n");
    scanf("%d",&opcion);


do{
        switch(opcion){

        case 1:;

            //declaro variable

            printf("\nEste programa calcula el coeficiente de fisher\n");
            printf("\n�Cu�ntos n�meros deseas ingresar? ");
            scanf("%d",&ndatos);
            float *m = (float *)malloc(ndatos * sizeof(float)); // Asignaci�n de memoria din�mica


             if (m == NULL) {
                    printf("No se pudo asignar memoria. Saliendo del programa.\n");
                    return 1;
                }
                //creamos ciclo para almacenar datos
                for (int i = 0; i < ndatos; i++) {
                    printf("Ingrese el dato %d: ", i+1);
                    scanf("%f", &m[i]);
                }

                float resultado=fisher(m,ndatos);
                printf("\n El coeficiente de Fisher es: %g\n",resultado);

                //ahora indicamos como es la clasificacion del coeficiente
                if(resultado >= -0.5 && resultado <= 0.5 ){
                    printf("\nLa clasificaci�n es sim�trica!\n");
                }

                else{
                    if(resultado < -0.5){
                        printf("\nLa clasificaci�n es asim�trica hacia la izquierda!\n");
                    }
                    else{
                        printf("\nLa clasificaci�n es asim�trica hacia la derecha!\n");
                    }
                }


            printf("\nFunci�n ejecutada! Ingrese 1 para continuar y 0 para salir\n");
            scanf("%d",&opcion2);
                if(opcion2==0){break;}else{system("cls");goto inicio;}
            break;


        case 2:;


            printf("\nEste programa convierte a n�meros binarios\n");
            printf("\n�Cu�ntos n�meros desea convertir?");
            scanf("%d",&ndec);

            int **p = (int **)malloc((ndec + 1) * sizeof(int *)); // Asignaci�n de memoria din�mica para el arreglo bidimensional


            for (int i = 0; i < ndec + 1; i++) {
                p[i] = (int *)malloc(17 * sizeof(int)); // Asignaci�n de memoria para cada fila
            }
            //Esto hace que el primer elemento del arreglo sea cero sea cero
            p[0][0]=0;

            for(int i=1; i<=ndec; i++){
                printf("Ingrese el n�mero %d: ",i);
                scanf("%d",&p[i][0]);
            }
            printf("\n");

            dec2bin(p,ndec);


            //Libera memoria al final del programa
            for (int i = 0; i < ndec + 1; i++) {
                free(p[i]);
            }
            free(p);


            printf("\nFunci�n ejecutada! Ingrese 1 para continuar y 0 para salir\n");
            scanf("%d",&opcion2);
            if(opcion2==0){break;}else{system("cls");goto inicio;}
            break;

        case 3:
            printf("\nEste programa realiza un histograma de 10 n�meros\n");
            printf("\nConsta de de 10 n�meros enteros positivos con un nivel m�ximo de 20\n");
            float *q = (float *)malloc(10 * sizeof(float)); // Asignaci�n de memoria din�mica

             if (q == NULL) {
                    printf("No se pudo asignar memoria. Saliendo del programa.\n");
                    return 1;
                }
                //creamos ciclo para almacenar datos
                        int max=0;

                        for (int i = 0; i <10; i++) {
                            inicio2:
                            printf("\nIngrese el dato %d: ", i+1);
                            scanf("%f", &q[i]);
                            if(q[i]>max){
                                max=q[i];
                            }


                            if(q[i]>20||q[i]<1){
                                printf("\nIngrese un entero positivo\a\n"); goto inicio2;
                            }

                        }
            printf("\n");
            histograma(q,max);
            printf("\n");


            printf("\nFunci�n ejecutada! Ingrese 1 para continuar y 0 para salir\n");
            scanf("%d",&opcion2);
            if(opcion2==0){break;}else{system("cls");goto inicio;}
            break;

            default:  printf("\nIngrese una opci�n v�lida!\n\a"); goto inicio;


        }
}while(opcion2!=0);

    //Esto borra los datos de la pantalla




}


