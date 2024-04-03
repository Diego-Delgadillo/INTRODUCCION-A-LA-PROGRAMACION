#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_CTYPE,"spanish");

   char c;
   c = "hola mundo";
   printf("%s",c);




}
