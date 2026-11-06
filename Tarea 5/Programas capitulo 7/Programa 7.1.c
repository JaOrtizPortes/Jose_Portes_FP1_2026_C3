#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char p1;
    printf("\nIngrese un carácter: ");
    p1 = getchar();
    if (isalpha(p1))
        if (isupper(p1))
            printf("%c es una letra mayúscula\n", p1);
        else
            printf("%c es una letra minúscula\n", p1);
    else if (isdigit(p1))
        printf("%c es un dígito\n", p1);
    else
        printf("%c no es una letra ni un dígito\n", p1);
}
