#include <stdio.h>

const int MAX = 50;

void Lectura(int [][MAX], int);
void Calcula(int [][MAX], float [][MAX], int);
void Imprime1(int [][MAX], int);
void Imprime2(float [][MAX], int);

void main(void)
{
    int MAT[MAX][MAX], TAM;
    float VEC[MAX][MAX];
    do
    {
        printf("Ingrese el tamaño de la matriz: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);

    Lectura(MAT, TAM);
    Calcula(MAT, VEC, TAM);
    Imprime1(MAT, TAM);
    Imprime2(VEC, TAM);
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

void Calcula(int A[][MAX], float B[][MAX], int T)
{
    int I, J;
    for (I=0; I<T; I++)
        for (J=0; J<T; J++)
            if (I == J)
                B[I][J] = 0.0;
            else
                if (I > J)
                    B[I][J] = (float)A[I][J] / A[J][I];
                else
                    B[I][J] = (float)A[J][I] / A[I][J];
}

void Imprime1(int A[][MAX], int T)
{
    int I, J;
    printf("\nMatriz original:\n");
    for (I=0; I<T; I++)
        for (J=0; J<T; J++)
            printf("\nElemento [%d][%d]: %d", I, J, A[I][J]);
}

void Imprime2(float A[][MAX], int T)
{
    int I, J;
    printf("\nMatriz calculada:\n");
    for (I=0; I<T; I++)
        for (J=0; J<T; J++)
            printf("\nElemento [%d][%d]: %.2f", I, J, A[I][J]);
}
