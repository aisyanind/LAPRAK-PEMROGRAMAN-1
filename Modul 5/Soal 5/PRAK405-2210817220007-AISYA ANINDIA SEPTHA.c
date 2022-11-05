#include<stdio.h>
int main()
{
int a, b, c, d, e, f, h, i, j, k;
for(a=1; a<=3; a++)
    {scanf("%d %d", &b, &c);
    for (d=1; d<=b; d++)
        {for (e=d; e>0; e--)
            {printf("(%d*%d) + ", e, c);}
            for (f=1, h=f*c; f<d; f++, h=h+(f*c))
            {}
            printf("(%d*%d) = %d\n", e, c, h);}
    for (i=1, j=1, k=0; i<=b; j=j+(i+1), i++)
        {k=k+(j*c);}
    printf("%d", k);}
}
