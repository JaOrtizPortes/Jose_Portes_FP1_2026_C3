#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    printf("\nIngrese la posición del carácter: ");
    scanf("%d", &n);

    if ((n >= 1) && (cad[n-1] != '\0'))
    {
        if (islower(cad[n-1]))
            printf("\nEl carácter en la posición %d es una letra minúscula", n);
        else
            printf("\nEl carácter en la posición %d no es una letra minúscula", n);
    }
    else
        printf("\nLa posición ingresada es incorrecta");
}
