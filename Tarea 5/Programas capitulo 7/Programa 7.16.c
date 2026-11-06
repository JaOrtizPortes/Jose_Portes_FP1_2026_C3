#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad1[50], cad2[50], *cad0;
    int c = 0;

    printf("\nIngrese la cadena principal: ");
    gets(cad1);
    printf("\nIngrese la subcadena a buscar: ");
    gets(cad2);

    cad0 = strstr(cad1, cad2);
    while (cad0 != NULL)
    {
        c++;
        cad0 = strstr(cad0 + strlen(cad2), cad2);
    }
    printf("\nEl número de veces que aparece la subcadena es: %d", c);
}
