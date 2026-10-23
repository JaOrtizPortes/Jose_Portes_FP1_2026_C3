#include <stdio.h>

const int F = 8, C = 4;

void Lectura(int [][C], int, int);
void F1(int [][C], int, int);
void F2(int [][C], int, int);

void main(void)
{
    int UNI[F][C];
    Lectura(UNI, F, C);
    F1(UNI, F, C);
    F2(UNI, F, C);
}

void Lectura(int A[][C], int T, int S)
{
    int I, J;
    for (I=0; I<T; I++)
        for (J=0; J<S; J++)
        {
            printf("Ingrese el número de alumnos de la carrera %d en la facultad %d: ", J+1, I+1);
            scanf("%d", &A[I][J]);
        }
}

void F1(int A[][C], int T, int S)
{
    int I, J, SUM;
    for (I=0; I<T; I++)
    {
        SUM = 0;
        for (J=0; J<S; J++)
            SUM += A[I][J];
        printf("\nTotal de alumnos de la facultad %d: %d", I+1, SUM);
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
        printf("\nTotal de alumnos de la carrera %d: %d", J+1, SUM);
    }
}
