#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "spanish");
    int x[100], b, c, *pa, *pb;
    x[50] = 10;
    x[51] = 40;
    x[10] = 20;
    x[0] = 30;
    pa = &x[50];
    pb = &x[10];
    b = *pa + 1;
    c = *(pa + 1);
    (*pb)--;
    x[0] = *pb;
    printf("x[0]=%d, x[10]=%d, x[50]=%d, x[51]=%d, b=%d, c=%d", x[0], x[10], x[50], x[51], b, c);
}
