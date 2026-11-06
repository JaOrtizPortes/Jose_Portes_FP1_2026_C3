#include <stdio.h>

int cuenta(char *, char);

void main(void)
{
    char car, cad[50];
    int res;

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    printf("\nIngrese el carácter: ");
    car = getchar();

    res = cuenta(cad, car);
    printf("\n\nEl carácter %c se encuentra %d veces en la cadena", car, res);
}

int cuenta(char *cad, char car)
{
    int i = 0, r = 0;
    while (cad[i] != '\0')
    {
        if (cad[i] == car)
            r++;
        i++;
    }
    return (r);
}
