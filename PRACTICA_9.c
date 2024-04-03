#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){

    setlocale(LC_CTYPE,"spanish");
    //DIEGO RICARDO DELGADILLO GÓMEZ


    //Esta variable es para el numero de elementos a guardar
    int n=10;
    //Creamos la matriz en este caso es para numeros flotantes
    float m[n];
    //declaramos variable del iterador
    int i=0;
    //variable de bandera para el metode de burbuja
    int aux;

    printf("9.1 Método de la burbuja\n");
    printf("\nIngrese 10 valores a la matriz: \n");

    //inciamos el ciclo para almacenar los datos de la matriz
    for(i=0; i<n; i++){

        printf("\nm[%d]:",i);
        scanf("%f",&m[i]);
    }

    printf("\n");
    //ahora este ciclo imprime los datos almacenados
    for(i=0;i<n;i++){
        printf("m[%d]= %.2f\t",i,m[i]);
    }

    for(i=0;i<n;i++){
        for(int j=0; j<n;j++){
            //este condicioanl es el que nos ayuda a ordenar de menor a mayor
            if(m[j] > m[j+1]){

                //llamamos a la variablle auxiliar y le asignamos el valor de las sigueinte posiciion
                aux=m[j+1];
                //cambia de posicion
                m[j+1]=m[j];
                m[j]=aux;
            }
        }
    }
    printf("\n");
    printf("\nDe forma ordenada:\n");
    printf("\n");

    //arreglo que imprime los valores ya ordenados
    for(i=0; i<n; i++){
        printf("%.2f\t",m[i]);
    }

    printf("\n");
    printf("\n9.2 Determinantes de matrices\n");
    printf("Determinante de matriz 3x3\n");

    //declaramos el arreglo p de 3x3
    int x=3;
    int y=3;
    int p[x][y];
    printf("\nIngrese los valores de la matriz: ");

    //ponemso2 ciclos for anidados para almacenar los valores de la matriz
    for(i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("\nm[%d][%d]: ",i,j);
            scanf("%d",&p[i][j]);
        }
    }


    printf("\n");
    //ahora se imprime la matriz con otro ciclo for
    for(i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d",p[i][j]);
            printf("\t");

        }
        printf("\n");
    }


    //declaramos variables para la multiplicacion

    //segunda matriz para la multiplicacion
    int p2[3][2];
    int det_1 = 0;
    int det_2 = 0;
    int det_3 = 0;
    //multiplicamos por la segunda
    for(i=0;i<x;i++){
        for(int j=0;j<2;j++){
            p2[i][j]=p[i][j];
        }
    }

    //calculamos la primera parte del determinante mediante la multiplicacion en diagonal
    det_2=((p[0][0]*p[1][1]*p[2][2])+(p[0][1]*p[1][2]*p2[2][0])+(p[0][2]*p2[1][0]*p2[2][1]));

    //Ahora obteniendo la mutliplicacion aen diagonal del otro lado
    det_3=((p[0][2]*p[1][1])*p[2][0]*(-1)+((p2[0][0]*p[1][2]*p[2][1]*(-1)))+((p2[0][1]*p2[1][0]*p[2][2]*(-1))));

    //así
    det_1=det_2-det_3;
    printf("\n");
    printf("La determinante de la matriz es: %d\n",det_1);


    printf("\n9.3 Inversa de Matrices\n");
    printf("Inversa de matriz de 2x2\n");
    //declaramso asl variables para crear la amtriz
    int a=2;
    int b=2;
    float q[a][b];

    inicio:
    printf("\nIngrese los datos de la matriz: \n");

    //ciclo para almacenar datos de la matriz
    for(i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("m[%d][%d]= ",i,j);
            scanf("%f",&q[i][j]);
        }
    }

    //obteniendo el determminante
    float q2[2][1];
    float det_4=0;
    float det_5=0;
    float det_6=0;

    for(i=0;i>a;i++){
        for(int j=0;j<1;j++){
            q2[i][j]=q[i][j];
        }
    }

    det_5=(q[0][0]*q[1][1])+(q[0][1]*q2[0][1]);
    det_6=((q[1][1]*q2[0][0]*(-1))+(q2[1][0]*q2[0][1])*(-1));
    det_4=det_5-det_6;

    //condicion para que sea invertible
    if(det_4==0){
        printf("\nNo es posible calcular la inversa de los valores ingresados!\n\a");
        goto inicio;
    }

    //ppara encontrar la adjunta
    float w[2][2];

        for(i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(i+j==1)
            {
                w[i][j]=((-1)*q[i][j])/(((q[0][0])*(q[1][1]))-((q[0][1])*(q[1][0])));
            }
            else if(i+j==0)
            {
                w[i][j]=(q[1][1])/(((q[0][0])*(q[1][1]))-((q[0][1])*(q[1][0])));
            }else
                w[i][j]=(q[0][0])/(((q[0][0])*(q[1][1]))-((q[0][1])*(q[1][0])));
        }
    }

    printf("\n");
    printf("Matriz ingresada: \n");
    //para imprimir la matriz normal
    for(i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%.2f",q[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("\n");
    printf("Matriz inversa: \n");
    //para imprimir la matriz iversa
    for(i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%.2f",w[i][j]);
            printf("\t");
        }
        printf("\n");
    }


    printf("\n9.4 Traspuesta de Matrices.\n");
    //Declaramos la fila y columna de elemntos
    int f=0;
    int c=0;

     printf("Numero de filas de la matriz: ");
    scanf("%d",&f);

    printf("Numero de columnas de la matriz: ");
    scanf("%d",&c);


    printf("\nIngresa el elemento de la matriz\n");

    int s[f][c];
    int t[f][c];

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            printf("\nm[%d][%d]= ",i,j);
            scanf("%d",&s[i][j]);
        }
    }

    //Ahora realizando la matriz transpuesta
    for(i=0;i<f;i++){
        for(int j=0;j<c;j++){
            t[i][j]=s[j][i];
        }

    }

    printf("\n");
    printf("Matriz ingresada: \n");

    //imprimiendo la matriz ingresada
    for(i=0;i<f;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    printf("Matriz transpuesta(T): \n");

    //imprimiendo los valores de la transpuesta
    for(i=0;i<f;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }

    printf("\nDIEGO RICARDO DELGADILLO GÓMEZ-1MM1\n");
    printf("\nINTRODUCCIÓN A LA PROGRAMACIÓN\n");




    printf("\n");
    system("pause");

    return 0;

}










