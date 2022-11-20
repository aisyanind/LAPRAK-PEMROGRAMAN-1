#include <stdio.h>
int main()
{
int a, b, c, d, e;
scanf("%d %d", &a, &b);
int f[a][b];
for (c=0; c<a; c++)
    {for (d=0; d<b; d++)
        {scanf ("%d", &e);
        f[c][d] = e;
        }
    }
printf("\n");
for (c=0; c<a; c++)
    {for (d=0; d<b; d++)
        {printf("%d ", f[c][d]);}
    printf("\n");
    }
}
