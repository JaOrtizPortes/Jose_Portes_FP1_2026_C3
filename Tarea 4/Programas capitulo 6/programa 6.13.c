#include <stdio.h>

const int F = 3, C = 5, P = 5;

void Lectura1(int [][C], int, int);
void Lectura2(float *, int);
void F1(int [][C], int, int, float *, float *);
void F2(int [][C], int, int);
void F3(int [][C], int, int);

void main(void)
{
    int PRO[F][C];
    float PRE[P];
    float TOT[F];

    Lectura1(PRO, F, C);
    Lectura2(PRE, P);
    F1(PRO, F, C, PRE, TOT);
    F2(PRO, F, C);
    F3(PRO, F, C);
}

void Lectura1(int A[][C], int T, int S)
{
    int I, J;
    for (I=0; I<T; I++)
        for (J=0; J<S; J++)
        {
            printf("Ingrese producción de la fábrica %d, artículo %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
}

void Lectura2(float A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el precio del artículo %d: ", I+1);
        scanf("%f", &A[I]);
    }
}

void F1(int A[][C], int T, int S, float B[], float TOT[])
{
    int I, J, SUM;
    for (I=0; I<T; I++)
    {
        SUM = 0;
        TOT[I] = 0.0;
        for (J=0; J<S; J++)
        {
            SUM += A[I][J];
            TOT[I] += A[I][J] * B[J];
        }
        printf("\nProducción total de la fábrica %d: %d", I+1, SUM);
        printf("\nVentas totales de la fábrica %d: $%.2f", I+1, TOT[I]);
    }
}

void F2(int A[][C], int T, int S)
{
    int I, J, SUM;
    printf("\n");
    for (J=0; J<S; J++)
    {
        SUM = 0;
        for (I=0; I<T; I++)
            SUM += A[I][J];
        printf("\nProducción total del artículo %d: %d", J+1, SUM);
    }
}

void F3(int A[][C], int T, int S)
{
    int I, J, MAY = A[0][0], FAB = 0;
    for (I=0; I<T; I++)
        for (J=0; J<S; J++)
            if (A[I][J] > MAY)
            {
                MAY = A[I][J];
                FAB = I;
            }
    printf("\n\nLa fábrica con mayor producción en un artículo fue la %d con %d unidades", FAB+1, MAY);
}
