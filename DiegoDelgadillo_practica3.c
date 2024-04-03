#include <stdio.h>
#include<locale.h>


int main(){
     setlocale(LC_ALL,"spanish");


    //1.Factorial de 9
    int fact = 1;
    fact = 1*2*3*4*5*6*7*8*9;
    printf("1.Factorial de 9: ");
    printf("%d\n", fact);

    //2.Resolver la siguiente operaci�n (b^2-4ac)/(2a)
    //donde a = 1, b = 5, c = 2, ((b*b)-(4*a*c))/(2*a)
    float a = 1, b = 5, c = 2;
    float operacion = 0;
    operacion = ((b*b)-(4.0*a*c))/(2.0*a);
    printf("\n2.Resolver la siguiente operaci�n ((b*b)-(4*a*c))/(2*a)");
    printf("\nEl resultado es: %.2f\n",operacion);


    /*3.Cu�l es la probabilidad de ganar el primer premio del Melate.
    Se eligen 6 n�meros que no
    se repiten, en el rango de 1 al 56. (1/(56*55*54*53*52*51))*/
    double probabilidad = 0;
    probabilidad = (1.0/(56.0*55.0*54.0*53.0*52.0*51.0));
    printf("\n3.La probabilidad es: %g\n", probabilidad);



    //4.Calcular el �rea del cuadrado (a*a), rect�ngulo (b*a),
    //trapecio (((c + d)*a )/2), tri�ngulo(a*e/2), rombo (f*g/2),
    //y esfera (4 * 3.14159 * h * h)
    printf("\n4. Calcular el �rea del cuadrado,rect�ngulo,trapecio,tri�ngulo,rombo y esfera\n");
    float a1 = 3, b1 = 5, c1 = 3, d1 = 4.2, e1 = 4.5, f1 = 3.7, g1 = 5.3, h1 = 3.4;
    float cuadrado = (a1*a1);
    float rectangulo = (b1*a1);
    float trapecio = (((c1 + d1)*a1 )/2);
    float triangulo = (a1*e1/2);
    float rombo  = (f1*g1/2);
    float esfera = (4 * 3.14159 * h1 * h1);

    printf("El �rea del cuadrado es: %.2f\n", cuadrado);
    printf("El �rea del rect�ngulo es: %.2f\n", rectangulo);
    printf("El �rea del trapecio es: %.2f\n", trapecio);
    printf("El �rea del tri�ngulo es: %.2f\n", triangulo);
    printf("El �rea del rombo es: %.2f\n", rombo);
    printf("El �rea de la esfera es: %.2f\n", esfera);

    /*
    5. Debes encontrar el n�mero m�ximo y m�nimo, de 10 n�meros que ingresar� el usuario y los
    mostrar�s en pantalla. (utiliza variables y operadores vistos en clase.)
    */

    printf("\n5.Debes encontrar el n�mero m�ximo y m�nimo, de 10 n�meros que ingresar� el usuario y los mostrar�s en pantalla");
    int primero, segundo, tercero, cuarto, quinto, sexto,septimo, octavo, noveno, decimo;


    printf("\nIngrese el primer n�mero: ");
    scanf("%d",&primero);
    printf("\nIngrese el segundo n�mero: ");
    scanf("%d",&segundo);
    printf("\nIngrese el tercer n�mero: ");
    scanf("%d",&tercero);
    printf("\nIngrese el cuarto n�mero: ");
    scanf("%d",&cuarto);
    printf("\nIngrese el quinto n�mero: ");
    scanf("%d",&quinto);
    printf("\nIngrese el sexto n�mero: ");
    scanf("%d",&sexto);
    printf("\nIngrese el s�ptimo n�mero: ");
    scanf("%d",&septimo);
    printf("\nIngrese el octavo n�mero: ");
    scanf("%d",&octavo);
    printf("\nIngrese el noveno n�mero: ");
    scanf("%d",&noveno);
    printf("\nIngrese el d�cimo n�mero: ");
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

    printf("\nEl n�mero m�ximo es: %d",maximo);

    minimo = (primero < segundo) ? primero : segundo;
    minimo = (tercero < minimo) ? tercero : minimo;
    minimo = (cuarto < minimo) ? cuarto : minimo;
    minimo = (quinto < minimo) ? quinto : minimo;
    minimo = (sexto < minimo) ? sexto: minimo;
    minimo = (septimo < minimo) ? septimo : minimo;
    minimo = (octavo < minimo) ? octavo : minimo;
    minimo = (noveno < minimo) ? noveno : minimo;
    minimo = (decimo < minimo) ? decimo : minimo;

    printf("\nEl n�mero m�nimo es: %d\n",minimo);

    printf("\nIntroducci�n a la programaci�n\n");
    printf("Diego Ricardo Delgadillo G�mez\n");
    printf("No de boleta: 2024680051\n");

    return 0;
}
