#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char cad[10];
    int i = 0;
    float sum = 0.0, val;

    printf("\nIngrese el valor (0 para terminar): ");
    gets(cad);
    val = atof(cad);

    while (val != 0.0)
    {
        sum += val;
        i++;
        printf("Ingrese el siguiente valor: ");
        gets(cad);
        val = atof(cad);
    }

    if (i > 0)
    {
        printf("\nSuma: %.2f", sum);
        printf("\nPromedio: %.2f", sum / i);
    }
}
