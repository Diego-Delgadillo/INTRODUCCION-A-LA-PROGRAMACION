#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


int main(){
    setlocale(LC_CTYPE,"spanish");

    /*
   int a=0;
   a=10;
   a=10-3;
   printf("%d",a);


    int a=0, *pint = &a;

    *pint = 10;
    *pint = *pint-3;
    printf("%d",*pint);



    //Las dos líneas siguientes declaran la variable entera a,
    //el apuntador q a enteros y la variabl real b


    int a =10,*q;
    double b = 0.0;

    q=&a;// asigna la direccion de a, a la variable q
    //q apunta a la variale entera a
    b=*q;//asigna a b el valor de la variable a
    printf("En la dirección %X está el dato %G\n",q,b);



    int a =10, *p,*q;
    p=&a;
    q=p; //la dirección que contiene p se asigna a q
    printf("En la dirección %X está el valor %d",q,*q);
    printf("\n");

    int lista[]={24,30,15,45,34};
    for(int i=0;i<5;i++){
        printf("%d\t",lista[i]);
    }


    //**SE PUEDEN HACER INDEXACIONES CON PUNTEROS
    int lista[]={24,30,15,45,34};
    int *plista = &lista[0];
    for(int i=0;i<5;i++){
        printf("%d\t",*(plista+i));
    }



    char*nombre ="Francisco Javier";// apuntador a una cadena de caracteres
    char cadena[]="Marco Antonio";// un arreglo tipo char con una cadena de caracteres asignada
    char*q;// se declara un apuntador tipo char
    q=cadena;// el apuntador se direcciona al arreglo tipo char
    q[7]='u';//Se cambian letras de cadena
    q[8]='r';
    q[9]='e';
    q[10]='l';
    printf("%s \n",nombre); //Se muestran en pantalla los de caracteres a partir
    printf("%s",cadena);//Se muestran en pantalla la cadena modificada



    int *p[5];//matriz de 5 elementos
    int b = 30; //variable de tipo int (entero)
    p[0]=&b;// p[0] punta al entero b
    printf("%d",*p[0]);// imprime en la consola el número 30 :D

*/

    //ARREGLO DE APUNTADORES <--

    int a[5][5];//matriz cuadrada de 2 dimensiones
    int *p[5];//matriz de punteros a int

    for(int i=0;i<5;i++){
        p[i]=a[i];//asignar a p las filas de a
    }

    printf("Ingresa valores enteros de una matriz de 5x5\n\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&p[i][j]);
        }
    }

    printf("\n\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d\t",p[i][j]);
            printf("\n");
        }
    }

    system("PAUSE");
}
