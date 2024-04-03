#include<stdio.h>
#include<locale.h>


int main(){
    setlocale(LC_CTYPE,"spanish");

    int a = 10, b = 20, c = 30, d = 45, f = 25;
    int g = 50, h = 40, i = 60, j = 55, k = 35;
    int m = 15, n = 35;
    int A, B, C, D, E, F;

    A = (a < b)? a:b;
    B = (c == d)? c:d;
    C = (f <= g)? f:g;
    D = (h >= i)? h:i;
    E = (j != k)? j:k;
    F = (m > n)? m:n;


    printf("A= %d\n", A);
    printf("B= %d\n", B);
    printf("C= %d\n", C);
    printf("D= %d\n", D);
    printf("E= %d\n", E);
    printf("F= %d\n", F);

    return 0;
}



