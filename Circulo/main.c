/*************************************************
* Objetivo : Calcular e mostrar a �rea do c�rculo *
* F�rmula : �rea = pi * r�                        *
*************************************************/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14159

void main()
{
double raio, area;

setlocale(LC_ALL,"");

printf("Raio do C�rculo: \n");
scanf("%lf", &raio);

area = PI * pow(raio, 2);

printf("�rea do c�rculo �: %.3lf", area);
}
