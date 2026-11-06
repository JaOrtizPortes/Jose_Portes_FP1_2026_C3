#include <stdio.h>

void invierte(char *);

void main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    printf("\nCadena invertida: ");
    invierte(cad);
}

void invierte(char *cadena)
{
    if (cadena[0] != '\0')
    {
        invierte(&cadena[1]);
        putchar(cadena[0]);
    }
}
