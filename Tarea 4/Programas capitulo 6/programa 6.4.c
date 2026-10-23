#include <stdio.h>

const int MAX = 50;

void Lectura(int [][MAX], int);
int Simetrica(int [][MAX], int);

void main(void)
{
    int MAT[MAX][MAX], RES, TAM;
    do
    {
        printf("Ingrese el tamaño de la matriz: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);

    Lectura(MAT, TAM);
    RES = Simetrica(MAT, TAM);
    if (RES)
        printf("\nEl arreglo bidimensional es simétrico");
    else
        printf("\nEl arreglo bidimensional no es simétrico");
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

int Simetrica(int A[][MAX], int T)
{
    int I = 0, J, F = 1;
    while ((I < T) && F)
    {
        J = 0;
        while ((J < I) && F)
        {
            if (A[I][J] == A[J][I])
                J++;
            else
                F = 0;
        }
        I++;
    }
    return (F);
}
