#include <stdio.h>
#include <string.h>

void intercambia(char [][30], int);

void main(void)
{
    char FRA[5][30];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese la frase %d: ", i + 1);
        gets(FRA[i]);
    }

    intercambia(FRA, 5);

    printf("\nFrases intercambiadas:\n");
    for (i = 0; i < 5; i++)
        printf("\nFrase %d: %s", i + 1, FRA[i]);
}

void intercambia(char A[][30], int n)
{
    int i, j;
    char aux[30];
    j = n - 1;
    for (i = 0; i < (n / 2); i++)
    {
        strcpy(aux, A[i]);
        strcpy(A[i], A[j]);
        strcpy(A[j], aux);
        j--;
    }
}
