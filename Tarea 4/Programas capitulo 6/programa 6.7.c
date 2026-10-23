#include <stdio.h>

void Lectura1(int [][12], int, int);
void Lectura2(float *, int);
void F1(int [][12], int, int, float *, float *);
void F2(int [][12], int, int);
void F3(int [][12], int, int);

void main(void)
{
    int PRO[15][12];
    float PRE[15];
    float TOT[15];
    float VTA = 0.0;

    Lectura1(PRO, 15, 12);
    Lectura2(PRE, 15);
    F1(PRO, 15, 12, PRE, TOT);
    F2(PRO, 15, 12);
    F3(PRO, 15, 12);
}

void Lectura1(int A[][12], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
        {
            printf("Ingrese producción del producto %d en el mes %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
}

void Lectura2(float A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el precio del producto %d: ", I+1);
        scanf("%f", &A[I]);
    }
}

void F1(int A[][12], int F, int C, float B[], float T[])
{
    int I, J, SUM;
    for (I=0; I<F; I++)
    {
        SUM = 0;
        for (J=0; J<C; J++)
            SUM += A[I][J];
        T[I] = SUM * B[I];
        printf("\nTotal de ventas del producto %d: $%.2f", I+1, T[I]);
    }
}

void F2(int A[][12], int F, int C)
{
    int I, J, SUM;
    for (J=0; J<C; J++)
    {
        SUM = 0;
        for (I=0; I<F; I++)
            SUM += A[I][J];
        printf("\nProducción total del mes %d: %d", J+1, SUM);
    }
}

void F3(int A[][12], int F, int C)
{
    int I, J, MAY = A[0][0], PRO = 0;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
            if (A[I][J] > MAY)
            {
                MAY = A[I][J];
                PRO = I;
            }
    printf("\n\nEl producto con mayor producción anual fue el %d con %d unidades", PRO+1, MAY);
}
