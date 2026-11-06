#include <stdio.h>
#include <ctype.h>

int cuentap(char *);

void main(void)
{
    char cad[50];
    int i;
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    i = cuentap(cad);
    printf("\nNúmero de palabras: %d", i);
}

int cuentap(char *cad)
{
    int i = 0, p = 0;
    while (cad[i] != '\0')
    {
        while (cad[i] == ' ')
            i++;
        if (cad[i] != '\0')
        {
            p++;
            while (cad[i] != ' ' && cad[i] != '\0')
                i++;
        }
    }
    return (p);
}
