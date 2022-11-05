#include <stdio.h>
int main()
{
int a, b, c;
char s;
for (a=1; a<=3; a++)
    {scanf("%d %c", &b, &s);
    for(c=1; c<=50; c++)
        {if(c%b==0)
            {printf("%c ", s);}
        else
            {printf("%d ", c);}}}
}
