#include <stdio.h>
int main()
{
for (int a=1; a<=5; a++)
{int d, h, j, m, det;
printf("");
scanf("%d", &det);
h = det % (86400*30)/86400;
j = (det % 86400)/3600;
m = det % 3600/60;
d = det % 60;

if (h>=1)
    {printf("%d hari %.2d:%.2d:%.2d\n", h, j, m, d);}

else
    {printf("%.2d:%.2d:%.2d\n", j, m, d);}
}
}
