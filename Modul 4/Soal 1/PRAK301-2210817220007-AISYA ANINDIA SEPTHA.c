#include <stdio.h>
int main()
{
for (int a=1; a<=3; a++)
{int b, c;
printf("");
scanf("%d", &b);
printf("");
scanf("%d", &c);
if (b<c)
    {printf("%d %d \n", b, c);}
else
    {if (c<b)
    {printf("%d %d\n", c, b);}
}
}
}
