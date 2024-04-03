#include<stdio.h>
#include<locale.h>

int main(){

    int opcion =0;
    int salir;
    int ndatos =0;
    setlocale(LC_CTYPE,"spanish");

    inicio:
    printf("\nEste progrma tiene 3 funciones, ingrese el número para ejecutar: \n");
    printf("\n1-Calcular el coeficiente de fisher.\n");
    printf("\n2-Convertir números decimales a binarios\n");
    printf("\n3-Histograma de 10 números\n");
    printf("\nIngrese una opción: \n");
    scanf("%d",&opcion);


    do{
        switch(opcion){

        case 1:

            printf("\nEste programa calcula el coeficiente de fisher\n");
            printf("Ingrese la cantidad de datos: ");
            scanf("%d",&ndatos);
            float datos[ndatos];

                //Ciclo para ignresar los datos
                for(int i=0;i<=ndatos;i++){
                    printf("Ingrese el dato %d: ",i);
                    scanf("%f",&datos[i]);


                }







            printf("\nPrograma terminado, ingrese 1 para continuar y 0 para salir");
            scanf("%d",&opcion);
            if(opcion==1){system("cls"); goto inicio;}
            break;


        case 2:
            printf("\nEste programa convierte a números binarios\n");
            printf("\nPrograma terminado, ingrese 1 para continuar y 0 para salir");
            scanf("%d",&opcion);
            if(opcion==1){system("cls"); goto inicio;}
            break;

        case 3:
            printf("\nEste programa realiza un histograma de 10 números\n");
            printf("\nPrograma terminado, ingrese 1 para continuar y 0 para salir\n");
            scanf("%d",&opcion);
            if(opcion==1){system("cls"); goto inicio; }
            break;

        default:  printf("\nIngrese una opción válida!\n\a"); goto inicio;

        }

    }while(opcion==1);

    //system("cls");

}
























