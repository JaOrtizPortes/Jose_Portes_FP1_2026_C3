#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad0[20] = "México";
    char cad1[20] = "Guatemala";
    int res;

    res = strcmp(cad0, cad1);
    if (res == 0)
        printf("\nLas cadenas son iguales");
    else if (res > 0)
        printf("\nLa cadena %s es mayor alfabéticamente que %s", cad0, cad1);
    else
        printf("\nLa cadena %s es menor alfabéticamente que %s", cad0, cad1);
}
