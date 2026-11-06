#include <stdio.h>
#include <string.h>

char *inversion(char *);

void main(void)
{
    char cad1[50], *cad2;
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad1);
    cad2 = inversion(cad1);
    printf("\nCadena invertida: %s", cad2);
}

char *inversion(char *cadena)
{
    int i = 0, j, lon;
    static char res[50];
    lon = strlen(cadena);
    for (j = lon - 1; j >= 0; j--)
    {
        res[i] = cadena[j];
        i++;
    }
    res[i] = '\0';
    return (res);
}
