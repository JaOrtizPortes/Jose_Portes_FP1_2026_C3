#include <stdio.h>

const int F = 50, C = 4;

void Lectura(float [][C], int, int);
void Funcion1(float [][C], int, int);
void Funcion2(float [][C], int, int);

void main(void)
{
    float ALU[F][C];
    Lectura(ALU, F, C);
    Funcion1(ALU, F, C);
    Funcion2(ALU, F, C);
}

void Lectura(float A[][C], int T, int S)
{
    int I, J;
    for (I=0; I<T; I++)
        for (J=0; J<S; J++)
        {
            printf("Ingrese la calificación [%d][%d]: ", I+1, J+1);
            scanf("%f", &A[I][J]);
        }
}

void Funcion1(float A[][C], int T, int S)
{
    int I, J;
    float SUM, PRO;
    for (I=0; I<T; I++)
    {
        SUM = 0.0;
        for (J=0; J<S; J++)
            SUM += A[I][J];
        PRO = SUM / S;
        printf("\nEl promedio del alumno %d es: %.2f", I+1, PRO);
    }
}

void Funcion2(float A[][C], int T, int S)
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
        printf("\nEl promedio del examen %d es: %.2f", J+1, PRO);
    }
}
