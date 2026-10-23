#include <stdio.h>

const int MAX = 50;

void Lectura(int [][MAX], int);
void Imprime(int [][MAX], int);

void main(void)
{
    int MAT[MAX][MAX], TAM;
    do
    {
        printf("Ingrese el tamaño de la matriz: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);

    Lectura(MAT, TAM);
    Imprime(MAT, TAM);
}

void Lectura(int A[][MAX], int T)
{
    int I, J;
    for (I=0; I<T; I++)
        for (J=0; J<T; J++)
        {
            printf("Ingrese el elemento [%d][%d]: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
}

void Imprime(int A[][MAX], int T)
{
    int I, J;
    printf("\nDiagonal principal:\n");
    for (I=0; I<T; I++)
        for (J=0; J<T; J++)
            if (I == J)
                printf("%d \n", A[I][J]);
}
