#include <stdio.h>
#include<locale.h>


int main(){
     setlocale(LC_ALL,"spanish");


    //1.Factorial de 9
    int fact = 1;
    fact = 1*2*3*4*5*6*7*8*9;
    printf("1.Factorial de 9: ");
    printf("%d\n", fact);

    //2.Resolver la siguiente operación (b^2-4ac)/(2a)
    //donde a = 1, b = 5, c = 2, ((b*b)-(4*a*c))/(2*a)
    float a = 1, b = 5, c = 2;
    float operacion = 0;
    operacion = ((b*b)-(4.0*a*c))/(2.0*a);
    printf("\n2.Resolver la siguiente operación ((b*b)-(4*a*c))/(2*a)");
    printf("\nEl resultado es: %.2f\n",operacion);


    /*3.Cuál es la probabilidad de ganar el primer premio del Melate.
    Se eligen 6 números que no
    se repiten, en el rango de 1 al 56. (1/(56*55*54*53*52*51))*/
    double probabilidad = 0;
    probabilidad = (1.0/(56.0*55.0*54.0*53.0*52.0*51.0));
    printf("\n3.La probabilidad es: %g\n", probabilidad);



    //4.Calcular el área del cuadrado (a*a), rectángulo (b*a),
    //trapecio (((c + d)*a )/2), triángulo(a*e/2), rombo (f*g/2),
    //y esfera (4 * 3.14159 * h * h)
    printf("\n4. Calcular el área del cuadrado,rectángulo,trapecio,triángulo,rombo y esfera\n");
    float a1 = 3, b1 = 5, c1 = 3, d1 = 4.2, e1 = 4.5, f1 = 3.7, g1 = 5.3, h1 = 3.4;
    float cuadrado = (a1*a1);
    float rectangulo = (b1*a1);
    float trapecio = (((c1 + d1)*a1 )/2);
    float triangulo = (a1*e1/2);
    float rombo  = (f1*g1/2);
    float esfera = (4 * 3.14159 * h1 * h1);

    printf("El área del cuadrado es: %.2f\n", cuadrado);
    printf("El área del rectángulo es: %.2f\n", rectangulo);
    printf("El área del trapecio es: %.2f\n", trapecio);
    printf("El área del triángulo es: %.2f\n", triangulo);
    printf("El área del rombo es: %.2f\n", rombo);
    printf("El área de la esfera es: %.2f\n", esfera);

    /*
    5. Debes encontrar el número máximo y mínimo, de 10 números que ingresará el usuario y los
    mostrarás en pantalla. (utiliza variables y operadores vistos en clase.)
    */

    printf("\n5.Debes encontrar el número máximo y mínimo, de 10 números que ingresará el usuario y los mostrarás en pantalla");
    int primero, segundo, tercero, cuarto, quinto, sexto,septimo, octavo, noveno, decimo;


    printf("\nIngrese el primer número: ");
    scanf("%d",&primero);
    printf("\nIngrese el segundo número: ");
    scanf("%d",&segundo);
    printf("\nIngrese el tercer número: ");
    scanf("%d",&tercero);
    printf("\nIngrese el cuarto número: ");
    scanf("%d",&cuarto);
    printf("\nIngrese el quinto número: ");
    scanf("%d",&quinto);
    printf("\nIngrese el sexto número: ");
    scanf("%d",&sexto);
    printf("\nIngrese el séptimo número: ");
    scanf("%d",&septimo);
    printf("\nIngrese el octavo número: ");
    scanf("%d",&octavo);
    printf("\nIngrese el noveno número: ");
    scanf("%d",&noveno);
    printf("\nIngrese el décimo número: ");
    scanf("%d",&decimo);

    int maximo,minimo, z;
    maximo = (primero > segundo)? primero:segundo;
    maximo = (tercero> maximo)? tercero:maximo;
    maximo = (cuarto> maximo)? cuarto:maximo;
    maximo = (quinto> maximo)? quinto:maximo;
    maximo = (sexto> maximo)? sexto:maximo;
    maximo = (septimo> maximo)? septimo:maximo;
    maximo = (octavo> maximo)? octavo:maximo;
    maximo = (noveno> maximo)? noveno:maximo;
    maximo = (decimo> maximo)? decimo:maximo;

    printf("\nEl número máximo es: %d",maximo);

    minimo = (primero < segundo) ? primero : segundo;
    minimo = (tercero < minimo) ? tercero : minimo;
    minimo = (cuarto < minimo) ? cuarto : minimo;
    minimo = (quinto < minimo) ? quinto : minimo;
    minimo = (sexto < minimo) ? sexto: minimo;
    minimo = (septimo < minimo) ? septimo : minimo;
    minimo = (octavo < minimo) ? octavo : minimo;
    minimo = (noveno < minimo) ? noveno : minimo;
    minimo = (decimo < minimo) ? decimo : minimo;

    printf("\nEl número mínimo es: %d\n",minimo);

    printf("\nIntroducción a la programación\n");
    printf("Diego Ricardo Delgadillo Gómez\n");
    printf("No de boleta: 2024680051\n");

    return 0;
}
