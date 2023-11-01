// #include <stdio.h>
// #define N 3
// int main()
// {
//     char x = 'c';
//     float y = 7.945f;
//     int v[N] = {5677};
//     int k = x - 'a';
//     printf("%d\n", k);
//     v[k] = (int) y;
//     v[151%2] = v[0]++;
//     double z = (double) (v[0]/100);
//     printf("%.1f\n", z);
//     v[2-(v[0]&1)] <<=3;
//     printf("%d\n%d\n%x\n", v[0], v[1], v[2]);
//     printf("%c", (x>'a')?'x':'y');
//     return 0;
// }

#include<stdio.h>
#define N 3
int main()
{
    int a = 32;
    char b = 'e';
    float c[N] = {1.94f};
    int d = ++b -'a';
    printf("%c\n", b);
    c[(int)c[0]]=36.78;
    float t = (float) (d/N);
    printf("t=%f\n", t);
    a|=1;
    c[a>>4] = a % 19;
    printf("%f\n%.1f\n%o\n", c[0], c[1], (int)(c[2]));
    printf("%d", (a>100)?20:50);
    return 0;
}