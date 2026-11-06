#include <stdio.h>

void main(void)
{
    char p1;
    printf("\nIngrese un carácter: ");
    p1 = getchar();
    if ((p1 >= '0') && (p1 <= '9'))
        printf("\nEl carácter ingresado es un número");
    else if (((p1 >= 'a') && (p1 <= 'z')) || ((p1 >= 'A') && (p1 <= 'Z')))
        printf("\nEl carácter ingresado es una letra");
    else
        printf("\nEl carácter ingresado no es letra ni número");
}
