// pr 3.5
#include <stdlib.h>
#include <stdio.h>

void citire(int *n, int a[100][100])
{
    scanf("%d", n);
    int i;
    int j;
    for (i = 0; i < *n; i++)
    {
        for (j = 0; j < *n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void adunare(int n, int a[100][100], int b[100][100], int rez[100][100])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rez[i][j] = a[i][j] + b[i][j];
        }
    }
}

void scadere(int n, int a[100][100], int b[100][100], int rez[100][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rez[i][j] = a[i][j] - b[i][j];
        }
    }
}

void inmultire(int n, int a[100][100], int b[100][100], int rez[100][100])
{

    int index = 0;
    int k;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            rez[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        k = 0;
        index = 0;
        while (k < n)
        {
            for (int j = 0; j < n; j++)
            {
                rez[i][index] += a[i][j] * b[j][k];
            }
            index++;
            k++;
        }
    }
}

void inmultireCuNumar(int n, int a[100][100], int rez[100][100], int numar)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rez[i][j] = a[i][j]*numar;
        }
    }
}

void afisare(int n, int a[100][100])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int B[100][100];
    int C[100][100];
    int A[100][100];
    int n;
    citire(&n, B);
    citire(&n, C);
    int BC[100][100];
    inmultire(n, B, C, BC);
    int BC2[100][100];
    int BCAdunat[100][100];
    adunare(n,B,C,BCAdunat);
    inmultireCuNumar(n, BCAdunat, BC2, -2);
    adunare(n, BC, BC2, A);
    afisare(n, A);
}