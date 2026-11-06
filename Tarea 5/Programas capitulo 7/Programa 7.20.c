#include <stdio.h>
#include <string.h>

int longitud(char *);

void main(void)
{
    char cad[50];
    int i;
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    i = longitud(cad);
    printf("\nLongitud de la palabra más larga: %d", i);
}

int longitud(char *cad)
{
    int i = 0, max = 0, actual = 0;
    while (cad[i] != '\0')
    {
        if (cad[i] != ' ')
        {
            actual++;
        }
        else
        {
            if (actual > max)
                max = actual;
            actual = 0;
        }
        i++;
    }
    if (actual > max)
        max = actual;
    return (max);
}
