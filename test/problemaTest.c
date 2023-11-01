#include<stdio.h>

int main()
{
    int v[101] = {0};
    int u[101] = {0};
    int m = 0, n = 0, i, j;
    char c = ' ';
    int count = 0;
    while(c!='#')
    {
        scanf(" %d", &v[n]);
        scanf("%c", &c);
        n++;
    }
    n--;
    c = ' ';
    while(c != '#')
    {
        scanf("%d", &u[m]);
        scanf("%c", &c);
        m++;
    }
    m--;
    for(i=0;i<n;i++)
    {
        if(i<=n-m)
        {
            for(j=0;j<m;j++)
            {
                if(v[i+j]!=u[j])
                {
                    break;
                }
            }
            if(j==m)
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("Nu se repeta!");
    }
    else{
        printf("Se repeta de %d ori", count);
    }

}

//1 4 7 8 96 8 96 8 4 8 96 8 96 8 96 8 #
//8 96 8