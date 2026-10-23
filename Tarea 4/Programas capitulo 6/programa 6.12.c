#include <stdio.h>

const int F = 24, C = 12;

void Lectura(float [][C], int, int);
void F1(float [][C], int, int);
void F2(float [][C], int, int);

void main(void)
{
    float LLU[F][C];
    Lectura(LLU, F, C);
    F1(LLU, F, C);
    F2(LLU, F, C);
}

void Lectura(float A[][C], int T, int S)
{
    int I, J;
    for (I=0; I<T; I++)
        for (J=0; J<S; J++)
        {
            printf("Ingrese lluvia en provincia %d, mes %d: ", I+1, J+1);
            scanf("%f", &A[I][J]);
        }
}

void F1(float A[][C], int T, int S)
{
    int I, J;
    float SUM, PRO;
    for (I=0; I<T; I++)
    {
        SUM = 0.0;
        for (J=0; J<S; J++)
            SUM += A[I][J];
        PRO = SUM / S;
        printf("\nPromedio de lluvia en la provincia %d: %.2f", I+1, PRO);
    }
}

void F2(float A[][C], int T, int S)
{
    int I, J, M = 0;
    float SUM, PRO, MAY = -1.0;
    for (J=0; J<S; J++)
    {
        SUM = 0.0;
        for (I=0; I<T; I++)
            SUM += A[I][J];
        PRO = SUM / T;
        if (PRO > MAY)
        {
            MAY = PRO;
            M = J;
        }
    }
    printf("\n\nEl mes con mayor promedio de lluvias fue el %d con %.2f", M+1, MAY);
}
