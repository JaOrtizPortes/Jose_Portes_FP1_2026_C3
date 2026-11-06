#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int i;
    double d;
    long l;
    char cad0[20] = "12345";
    char cad1[20] = "+123.45";

    i = atoi(cad0);
    printf("\nCadena a entero: %d", i + 10);

    d = atof(cad1);
    printf("\nCadena a real: %.2lf", d + 10.0);

    l = atol(cad0);
    printf("\nCadena a entero largo: %ld", l);
}
