#include <stdlib.h>
#include <stdio.h>

int main()
{
    float lado;
    float area;
    float perimetro;

    printf("Digite o valor dos lados do triangulo : \n");
    scanf("%f", &lado);

    area = lado * lado;
    perimetro = 3 * lado;

    printf("O valor da area eh: %.f \n", area);
}
