#include <stdio.h>
#include "fractie.h"

static int cmmdc(int a, int b)
{
    int rest;
    rest = a % b;
    while (rest != 0)
    {
        a = b;
        b = rest;
        rest = a % b;
    }
    return b;
}

static int cmmmc(int a, int b)
{
    return a*b/cmmdc(a,b);
}

void citireFractie(int f[2])
{
    scanf("%d %d", &f[0], &f[1]);
}

void afisareFractie(int f[2])
{
    printf("%d %d", f[0], f[1]);
}

void inmultire(int f1[2], int f2[2], int rez[2])
{
    rez[0] = f1[0] * f2[0];
    rez[1] = f2[1] * f2[1];
}

void impartire(int f1[2], int f2[2], int rez[2])
{
    int aux[2];
    aux[0] = f2[1];
    aux[1] = f2[0];
    inmultire(f1, aux, rez);
}

void adunare(int f1[2], int f2[2], int rez[2])
{
    int x;
    x = cmmmc(f1[1], f2[0]);
    f1[0] *= (x/f1[1]);
    f1[1] *= (x/f1[1]);
    f2[0] *= (x/f2[1]);
    f2[1] *= (x/f2[1]);
    rez[0] = f1[0] + f2[0];
    rez[1] = x;
}

void scadere(int f1[2], int f2[2], int rez[2])
{
    int x;
    x = cmmmc(f1[1], f2[0]);
    f1[0] *= (x/f1[1]);
    f1[1] *= (x/f1[1]);
    f2[0] *= (x/f2[1]);
    f2[1] *= (x/f2[1]);
    rez[0] = f1[0] - f2[0];
    rez[1] = x;
}
