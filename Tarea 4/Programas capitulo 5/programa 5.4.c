#include <stdio.h>

const int MAX = 10;

void Lectura(int *, int);
int Producto(int *, int *, int);

void main(void)
{
    int VEC[MAX], VEC2[MAX], RES;
    Lectura(VEC, MAX);
    Lectura(VEC2, MAX);
    RES = Producto(VEC, VEC2, MAX);
    printf("\n\nProducto escalar de los vectores: %d", RES);
}

void Lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}

int Producto(int A[], int B[], int T)
{
    int I, PRO = 0;
    for (I=0; I<T; I++)
        PRO += A[I] * B[I];
    return (PRO);
}
