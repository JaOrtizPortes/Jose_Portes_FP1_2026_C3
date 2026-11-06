#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad0[30] = "Hola ";
    char cad1[15] = "México";
    char cad2[30];

    strcpy(cad2, cad0);
    printf("\nCadena 2: %s", cad2);

    strcat(cad2, cad1);
    printf("\nCadena 2 concatenada: %s", cad2);

    strncpy(cad2, "Buenos días", 6);
    cad2[6] = '\0';
    printf("\nCadena 2 modificada: %s", cad2);
}
