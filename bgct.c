#include <stdio.h>
#include <locale.h>
int main ()
{
setlocale(LC_CTYPE, "Spanish");
//sentencia goto
printf("Tablas de Multiplicar, al encontrar el número 21\n");
printf("termina el proceso completamente (GOTO)\n");
int resultado = 0;
for (int m=1; m<=10; m++)
{
for (int n=1; n<=10; n++)
{
resultado = n * m;
if (resultado % 21 == 0)
goto salida;
printf("%d \t", resultado);
}
printf("\n");
}
salida:
printf("\n\n\n");
//sentencia break
printf("Tablas de Multiplicar, al encontrar números múltiplos de 21 \n");
printf("Ya no imprime lo que falta de la fila (BREAK) \n");
resultado = 0;
for (int m=1; m<=10; m++)
{
for (int n=1; n<=10; n++)
{
resultado = n * m;
if (resultado % 21 == 0)
break;
printf("%d \t", resultado);
}
printf("\n");
}
printf("\n\n\n");
//sentencia continue
printf("Tablas de Multiplicar, al encontrar números múltiplos de 21 \n");
printf("No los imprime (CONTINUE)\n");
resultado = 0;
for (int m=1; m<=10; m++)
{
for (int n=1; n<=10; n++)
{
resultado = n * m;
if (resultado % 21 == 0)
continue;
printf("%d \t", resultado);
}
printf("\n");
}
}
