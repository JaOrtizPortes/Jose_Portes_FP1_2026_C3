#include <stdio.h>

const int MAX = 50;

void Cuadrado(int [][MAX], int);
void Imprime(int [][MAX], int);

void main(void)
{
    int CMA[MAX][MAX], TAM;
    do
    {
        printf("Ingrese el tamaño del cuadrado mágico (impar): ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1 || (TAM % 2 == 0));

    Cuadrado(CMA, TAM);
    Imprime(CMA, TAM);
}

void Cuadrado(int A[][MAX], int T)
{
    int I = 0, J = T / 2, K = 1, FIL, COL;
    A[I][J] = K;
    while (K < T * T)
    {
        FIL = I;
        COL = J;
        I = (I - 1 + T) % T;
        J = (J + 1) % T;
        if (A[I][J] != 0)
        {
            I = (FIL + 1) % T;
            J = COL;
        }
        K++;
        A[I][J] = K;
    }
}

void Imprime(int A[][MAX], int T)
{
    int I, J;
    printf("\nCuadrado mágico:\n");
    for (I=0; I<T; I++)
    {
        for (J=0; J<T; J++)
            printf("%5d", A[I][J]);
        printf("\n");
    }
}
