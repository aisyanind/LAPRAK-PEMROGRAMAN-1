#include <stdio.h>
int main()
{
int a[10][10], b[10][10], c[10][10], d, e, f, g, h;
h = 0;
scanf("%d", &g);
printf("Matriks A\n");
for(d=0; d<g; d++)
    {for(e=0; e<g; e++)
        {scanf("%d", &a[d][e]);}
    }
printf("Matriks B\n");
for(d=0; d<g; d++)
    {for(e=0; e<g; e++)
        {scanf("%d", &b[d][e]);}
    }
for(d=0; d<g; d++)
    {for(e=0; e<g; e++)
        {for(f=0; f<g; f++)
            {h = h + a[d][f] * b[f][e];}
        c[d][e] = h;
        h = 0;}
    }
printf("\nMatriks AXB\n");
for(d=0; d<g; d++)
    {for(e=0; e<g; e++)
        {printf("%d ", c[d][e]);}
    printf("\n");
    }
return 0;
}
