#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char cad[50];
    int i = 0, mai = 0, min = 0;

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    while (cad[i] != '\0')
    {
        if (isupper(cad[i]))
            mai++;
        else if (islower(cad[i]))
            min++;
        i++;
    }
    printf("\n\nNúmero de letras mayúsculas: %d", mai);
    printf("\nNúmero de letras minúsculas: %d", min);
}
