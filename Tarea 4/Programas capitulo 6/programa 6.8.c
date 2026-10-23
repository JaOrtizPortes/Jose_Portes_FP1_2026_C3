#include <stdio.h>

const int MAX = 50;

void Lectura(int [][MAX], int, int);
void Traspuesta(int [][MAX], int [][MAX], int, int);
void Imprime(int [][MAX], int, int);

void main(void)
{
    int MAT[MAX][MAX], TRA[MAX][MAX];
    int F, C;
    do
    {
        printf("Ingrese el número de filas: ");
        scanf("%d", &F);
    }
    while (F > MAX || F < 1);

    do
    {
        printf("Ingrese el número de columnas: ");
        scanf("%d", &C);
    }
    while (C > MAX || C < 1);

    Lectura(MAT, F, C);
    Traspuesta(MAT, TRA, F, C);
    Imprime(TRA, C, F);
}

void Lectura(int A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
        {
            printf("Ingrese el elemento [%d][%d]: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
}

void Traspuesta(int A[][MAX], int B[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
            B[J][I] = A[I][J];
}

void Imprime(int A[][MAX], int F, int C)
{
    int I, J;
    printf("\nMatriz traspuesta:\n");
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
            printf("\nElemento [%d][%d]: %d", I, J, A[I][J]);
}
