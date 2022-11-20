#include <stdio.h>
int main()
{
int a, b, c, d, e;
scanf("%d %d", &a, &b);
int f[a], g[b];
    if(a != b)
        {printf("\nJumlah tidak sama");}
    else
        {for(e=0; e<a; e++)
            {scanf("%d", &c);
            f[e] = c;
            }
        for(e=0; e<b; e++)
            {scanf("%d", &c);
            g[e] = c;
            }
        printf("\n");
        for(e=0; e<b; e++)
            {d = f[e] * g[e];
            printf("%d ", d);
            }
        }
printf("\n");
return 0;
}
