// pr 3.15

// #include<stdio.h>

// int main()
// {
//     int sir1[100];
//     int sir2[100];
//     int intersection[200] = {0};
//     int reunion[200] = {0};
//     int firstSir[100];
//     int i, j;
//     int n, m;
//     int index1 = 1;
//     int index2 = 1;
//     int index3 = 1;
//     int aux;
//     scanf("%d", &n);
//     scanf("%d", &m);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d", &sir1[i]);
//     }
//     for(i=0;i<m;i++)
//     {
//         scanf("%d", &sir2[i]);
//     }

//     for(i = 0;i<n-1;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(sir1[j]<sir1[i])
//             {
//                 aux = sir1[i];
//                 sir1[i] = sir1[j];
//                 sir1[j] = aux;
//             }
//         }
//     }

//     for(i = 0;i<m-1;i++)
//     {
//         for(j=i+1;j<m;j++)
//         {
//             if(sir2[j]<sir2[i])
//             {
//                 aux = sir2[i];
//                 sir2[i] = sir2[j];
//                 sir2[j] = aux;
//             }
//         }
//     }

//     // for(i=0;i<n;i++)
//     // {
//     //     printf("%d ", sir1[i]);
//     // }
//     // printf("\n");
//     // for(i=0;i<m;i++)
//     // {
//     //     printf("%d ", sir2[i]);
//     // }

//     i = 0;
//     j = 0;
//     while(i<n && j<m)
//     {
//         if(sir1[i]<sir2[j])
//         {
//             if(reunion[index2-1]!=sir1[i])
//                 reunion[index2++] = sir1[i];
//             firstSir[index3++] = sir1[i];
//             i++;
//         }
//         else if(sir1[i]>sir2[j])
//         {
//             if(reunion[index2-1]!=sir2[j])
//                 reunion[index2++] = sir2[j];
//             j++;
//         }
//         else
//         {
//             if (intersection[index1-1]!=sir1[i])
//             {
//                 intersection[index1++] = sir1[i];
//             }
//             if(reunion[index2-1]!=sir1[i])
//             {
//                 reunion[index2++] = sir1[i];
//             }
//             i++;
//         }
//     }

//     while(i<n)
//     {
//         if(reunion[index2-1]!= sir1[i])
//             reunion[index2++] = sir1[i];
//         firstSir[index3++] = sir1[i];
//         i++;
//     }
//     while(j<m)
//     {
//         if (reunion[index2-1]!=sir2[j])
//             reunion[index2++] = sir2[j];
//         j++;
//     }

//     for(i=1;i<index1;i++)
//     {
//         printf("%d ", intersection[i]);
//     }
//     printf("\n");
//     for(i=1;i<index2;i++)
//     {
//         printf("%d ", reunion[i]);
//     }
//     printf("\n");
//     for(i=1;i<index3;i++)
//     {
//         printf("%d ", firstSir[i]);
//     }
// }

// pr 3.7

// #include<stdio.h>

// int main()
// {
//     int hexa;
//     scanf("%x", &hexa);
//     printf("%d", hexa);
// }

// pr 3.18
//  #include<stdio.h>

// int main()
// {
//     int n;
//     int m[100][100];
//     int i, j;
//     int ok = 1;
//     scanf("%d", &n);
//     for(i = 0; i<n; i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d", &m[i][j]);
//         }
//     }
//     for(i = 0; i<n; i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             if(m[i][j] != m[j][i])
//             {
//                 ok = 0;
//                 break;
//             }
//         }
//         if(ok==0)
//         {
//             break;
//         }
//     }
//     if(ok!= 0)
//     {
//         printf("Matricea e simetrica");
//     }
//     else{
//         printf("Matricea nu e simetrica");
//     }
// }

// pr 3.19
#include <stdio.h>
int main()
{
    char s[101];
    scanf("%s", s);
    gets(s);
    // int i;
    // int lMax = -1;
    // int l = 0;
    // char cuvMax[100];
    // char cuv[100];
    // int nrCuv;
    // for (i = 0; i < strlen(s); i++)
    // {
    //     if (s[i] != ' ')
    //     {
    //         cuv[l++] = s[i];
    //     }
    //     else
    //     {
    //         if (l > lMax)
    //         {
    //             lMax = l;
    //             for (int k = 0; k < l; k++)
    //             {
    //                 cuvMax[k] = cuv[k];
    //             }
    //         }
    //         nrCuv++;
    //         l = 0;
    //     }
    // }
    // if (l > lMax)
    // {
    //     lMax = l;
    //     for (int k = 0; k < l; k++)
    //     {
    //         cuvMax[k] = cuv[k];
    //     }
    // }
    // nrCuv++;
    // printf("Popozitia are %d cuvinte\n", nrCuv);
    // printf("Cel mai lung cuvant este %s", cuvMax);
}


