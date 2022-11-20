#include <stdio.h>
int main()
{
int a, b, c;
scanf("%d", &a);
int d[a];
for(int e=0; e<a; e++)
    {scanf("%d", &b);
    d[e] = b;
    }
    printf("\n");
for(int e=0; e<a; e++)
    {c = d[e] * (e + 1);
    printf("%d ", c);
    }
printf("\n");
return 0;
}
