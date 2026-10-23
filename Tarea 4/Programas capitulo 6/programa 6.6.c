#include <stdio.h>

const int MAX = 50;

void Lectura(float [][MAX], int, int);
void Intercambia(float [][MAX], int, int);
void Imprime(float [][MAX], int, int);

void main(void)
{
    float MAT[MAX][MAX];
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
    Intercambia(MAT, F, C);
    Imprime(MAT, F, C);
}

void Lectura(float A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
        {
            printf("Ingrese el elemento [%d][%d]: ", I+1, J+1);
            scanf("%f", &A[I][J]);
        }
}

void Intercambia(float A[][MAX], int F, int C)
{
    int I, J;
    float AUX;
    // Intercambia renglones simétricos respecto al centro
    for (I=0; I < F/2; I++)
        for (J=0; J<C; J++)
        {
            AUX = A[I][J];
            A[I][J] = A[F-I-1][J];
            A[F-I-1][J] = AUX;
        }
}

void Imprime(float A[][MAX], int F, int C)
{
    int I, J;
    printf("\nMatriz intercambiada:\n");
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
            printf("\nElemento [%d][%d]: %.2f", I, J, A[I][J]);
}
