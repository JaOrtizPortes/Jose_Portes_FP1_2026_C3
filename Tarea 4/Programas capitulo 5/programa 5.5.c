#include <stdio.h>

const int TAM = 50;

void Lectura(int *, int);
void Frecuencia(int *, int, int *, int);
void Impresion(int *, int);

void main(void)
{
    int CAL[TAM], FRE[6] = {0};
    Lectura(CAL, TAM);
    Frecuencia(CAL, TAM, FRE, 6);
    Impresion(FRE, 6);
}

void Lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese la calificación (0-5) del alumno %d: ", I+1);
        scanf("%d", &A[I]);
    }
}

void Frecuencia(int A[], int P, int B[], int T)
{
    int I;
    for (I=0; I<P; I++)
        if ((A[I] >= 0) && (A[I] < 6))
            B[A[I]]++;
}

void Impresion(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
        printf("\nFrecuencia de %d: %d", I, A[I]);
}
