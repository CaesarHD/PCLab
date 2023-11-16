#include <stdio.h>
#include "fractie.h"

int main()
{
    int f1[2], f2[2], r[2];
    citireFractie(f1);
    citireFractie(f2);
    adunare(f1, f2, r);
    afisareFractie(r);
}