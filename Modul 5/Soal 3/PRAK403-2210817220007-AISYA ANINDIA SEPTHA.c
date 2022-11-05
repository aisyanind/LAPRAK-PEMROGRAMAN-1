#include <stdio.h>
int main()
{
int a, b, c, d, e;
for (c=1; c<=4; c++)
    {scanf("%d %d", &a, &b);
    if (a > b)
        {for (d=a, e=b; d>=b, e<=a; d--, e++)
            {printf("%d %d", d, e);
            if(d == b)
                {break;}
            else
                {printf(" - ");}}}
    else
        {for (d=a, e=b; d<=b, e>=a; d++, e--)
            {printf("%d %d", d, e);
            if(d == b)
                {break;}
            else
                {printf(" - ");}}}}
}
