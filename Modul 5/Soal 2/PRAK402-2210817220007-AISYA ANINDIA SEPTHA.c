#include <stdio.h>
int main()
{
int a, b, c;
for (a=1; a<=3; a++)
    {scanf("%d", &b);
    for(c=1; c<=b; c++)
        {if(c%2 == 1)
            {printf("%d ", c);}}
    printf("\n");
    for(c=b; c>=1; c--)
        {if (c%2 == 0)
            {printf("%d ", c);}}
    printf("\n");}
}
