#include <stdio.h>

void elimina(char *);

void main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    elimina(cad);
    printf("\nCadena sin espacios sobrantes: %s", cad);
}

void elimina(char *cadena)
{
    int i = 0, j = 0;
    while (cadena[i] != '\0')
    {
        if (cadena[i] == ' ' && cadena[i+1] == ' ')
        {
            i++;
        }
        else
        {
            cadena[j] = cadena[i];
            i++;
            j++;
        }
    }
    cadena[j] = '\0';
}
