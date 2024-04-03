#include<stdio.h>

int main(){

    char*nombre="Francisco Javier";//apuntadoraunacadenadecaracteres
    char cadena[]="Marco Antonio";//unarreglotipocharconunacadenadecaracteresasignada
    char*q;//sedeclaraunapuntadortipochar
    q=cadena;//elapuntadorsedireccionaalarreglotipochar
    q[7]='u';//Secambianletrasdecadena
    q[8]='r';
    q[9]='e';
    q[10]='l';
    printf("%s\n",nombre);//Semuestranenpantallalosdecaracteresapartirdelapuntadornombre
    printf("%s",cadena);//Semuestranenpantallalacadenamodificada




}
