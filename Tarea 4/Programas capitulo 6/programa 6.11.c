#include <stdio.h>

const int F = 5, C = 12;

void Lectura(float [][C], int, int);
void F1(float [][C], int, int);
void F2(float [][C], int, int);
void F3(float [][C], int, int);

void main(void)
{
    float FON[F][C];
    Lectura(FON, F, C);
    F1(FON, F, C);
    F2(FON, F, C);
    F3(FON, F, C);
}

void Lectura(float A[][C], int T, int S)
{
    int I, J;
    for (I=0; I<T; I++)
        for (J=0; J<S; J++)
        {
            printf("Ingrese precio del fondo %d en el mes %d: ", I+1, J+1);
            scanf("%f", &A[I][J]);
        }
}

void F1(float A[][C], int T, int S)
{
    int I;
    float REN;
    for (I=0; I<T; I++)
    {
        REN = (A[I][S-1] - A[I][0]) / A[I][0];
        printf("\nRendimiento del fondo %d: %.2f", I+1, REN);
    }
}

void F2(float A[][C], int T, int S)
{
    int I, J;
    float SUM, PRO;
    printf("\n");
    for (J=0; J<S; J++)
    {
        SUM = 0.0;
        for (I=0; I<T; I++)
            SUM += A[I][J];
        PRO = SUM / T;
        printf("\nPromedio de los fondos en el mes %d: %.2f", J+1, PRO);
    }
}

void F3(float A[][C], int T, int S)
{
    int I, J, MF = 0, MM = 0;
    float MEN = A[0][0], MAY = A[0][0];
    for (I=0; I<T; I++)
        for (J=0; J<S; J++)
        {
            if (A[I][J] < MEN)
            {
                MEN = A[I][J];
                MF = I;
                MM = J;
            }
            if (A[I][J] > MAY)
            {
                MAY = A[I][J];
            }
        }
    printf("\n\nEl fondo con menor valor fue el %d en el mes %d con %.2f", MF+1, MM+1, MEN);
}
