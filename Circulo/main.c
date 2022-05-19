/*************************************************
* Objetivo : Calcular e mostrar a área do círculo *
* Fórmula : Área = pi * r²                        *
*************************************************/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14159

void main()
{
double raio, area;

setlocale(LC_ALL,"");

printf("Raio do Círculo: \n");
scanf("%lf", &raio);

area = PI * pow(raio, 2);

printf("Área do círculo é: %.3lf", area);
}
